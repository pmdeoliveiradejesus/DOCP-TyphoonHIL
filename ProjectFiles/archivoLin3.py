#Importar librerias de typhoon
from typhoon.api.schematic_editor import SchematicAPI
import typhoon.api.hil as hil
from typhoon.api.schematic_editor.const import HANDLER_MASK_INIT, \
    HANDLER_PROPERTY_VALUE_CHANGED, WIDGET_COMBO
from typhoon.api.schematic_editor import const
import typhoon.api.hil as hil
import numpy as np
import time
from pathlib import Path
import typhoon.test.capture as capture
import typhoon.test.signals as signal
import typhoon.test.ranges as ranges
import pytest
from typhoon.test.capture import start_capture, get_capture_results
import pandas as pd

#Se define el modelo
mdl = SchematicAPI()
        
#Inicialización de variables CPCS
D = 10

def funAr3(model, hcpd, datos, tipoCurva, nFallas, tiempoFalla, tasaMuestreo, durSim):
    #Constantes de relé
    if tipoCurva=="IEC Standard Inverse":
        csiB=0.14
        csiA=0.02
        csiL=0
    elif tipoCurva=="IEC Very Inverse":
        csiB=13.5
        csiA=1
        csiL=0
    elif tipoCurva=="IEC Extremely Inverse":
        csiB=80
        csiA=2
        csiL=0
        
    #Se calculan los puntos en los que se harán las fallas
    if nFallas==1:
        L1=[0.5]
        L2=[0.5]
        l1=[D/2]
        l2=[D/2]
    else:
        dist=(0.95-0.05)/(nFallas-1)
        LInt=list(range(nFallas))
        tamañoLint=len(LInt)
        L1 = [(i*dist)+0.05 for i in LInt]
        L1[0]=0.05
        L1[tamañoLint-1]=0.95
        l1=np.multiply(L1,D)
        unos=np.ones(tamañoLint)
        L2=unos-L1
        l2=D*L2

    #Se carga el modelo
    mdl.load(model)
    
    #Se verifican cuales son los relés del sistema CPCS
    Relays=[4,11,3,12]
    rPrimarios=[4,11]
    BetaT=list()
    TetaT=list()
    relesEXP=list()
    tiemposOperacion=list()

    #Se configura el tipo de función del relé
    rele4 = mdl.get_item("Relay-4", item_type=const.ITEM_MASKED_COMPONENT)
    rele11 = mdl.get_item("Relay-11", item_type=const.ITEM_MASKED_COMPONENT)
    rele3 = mdl.get_item("Relay-3", item_type=const.ITEM_MASKED_COMPONENT)
    rele12 = mdl.get_item("Relay-12", item_type=const.ITEM_MASKED_COMPONENT)

    mdl.set_property_value (mdl.prop(rele4, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele11, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele3, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele12, "function"), tipoCurva)

    contadorF=0

    for i in range(len(l1)):
        contadorF=contadorF+1
        print("La falla es la ", contadorF)

        #CPCS
        Line1 = mdl.get_item("Line-3_section-1", item_type=const.ITEM_MASKED_COMPONENT)
        Line2 = mdl.get_item("Line-3_section-2", item_type=const.ITEM_MASKED_COMPONENT)
        
        mdl.set_property_value (mdl.prop(Line1, "Length_metric"), l1[i])
        valorNuevo1 = mdl.get_property_value (mdl.prop (Line1, "Length_metric"))

        mdl.set_property_value (mdl.prop(Line2, "Length_metric"), l2[i])
        valorNuevo2 = mdl.get_property_value (mdl.prop (Line2, "Length_metric"))
        
        # Compile model
        if mdl.compile():
            print("Model successfully compiled.")
        else:
            print("Model failed to compile")
                
        #Se recarga el modelo
        hil.load_model(hcpd, vhil_device=True)
        
        #Se reinician los datos de todos los relés
        for i in Relays:
            hil.set_scada_input_value('Relay-'+str(i)+'.Function (67P).Reset', 1.0)
        hil.wait_msec(500)
        for j in Relays:
            hil.set_scada_input_value('Relay-'+str(j)+'.Function (67P).Reset', 0.0)
            
        #Se fijan los datos de TMS y pickUP en los relés     
        #Se controlan contactores 
        for j in Relays:
            hil.set_scada_input_value('Relay-'+str(j)+'.Function (67P).TMS', datos[0][j-1])
            hil.set_scada_input_value('Relay-'+str(j)+'.Function (67P).I_Pick_Up', datos[1][j-1])
            hil.set_contactor('S'+str(j), swControl=True, swState=True)
        
        hil.start_simulation()
        
        #Se falla el sistema en 120 ciclos
        hil.set_contactor('Fault-1.S1', swControl=True, swState=True, executeAt=tiempoFalla)
        while hil.get_sim_time()<tiempoFalla:
            esperar=1
        start_capture(duration=durSim, rate=tasaMuestreo, signals=["Relay-4.Function (67P).I_A(RMS)","Relay-11.Function (67P).I_A(RMS)","Relay-3.Function (67P).I_A(RMS)","Relay-12.Function (67P).I_A(RMS)"])
        # do something in meantime which takes 10 seconds...
        capture = get_capture_results(wait_capture=True) # waits until the 10 second capture elapses
        
        dataCap=capture.reset_index().values
        index=capture.index
        I4_data=np.multiply(dataCap[:,1],1)
        I11_data=np.multiply(dataCap[:,2],1)
        I3_data=np.multiply(dataCap[:,3],1)
        I12_data=np.multiply(dataCap[:,4],1)
        simTime=index.total_seconds()
        
        
        tg4=[]
        tg11=[]
        tg3=[]
        tg12=[]
        for i in range(len(I4_data)):
            tg4.append(1/(((datos[0][4-1]*(csiB))/(((I4_data[i]/(datos[1][4-1]*200/5))**(csiA))-1))+csiL))
            tg11.append(1/(((datos[0][11-1]*(csiB))/(((I11_data[i]/(datos[1][11-1]*200/5))**(csiA))-1))+csiL))
            tg3.append(1/(((datos[0][3-1]*(csiB))/(((I3_data[i]/(datos[1][3-1]*200/5))**(csiA))-1))+csiL))
            tg12.append(1/(((datos[0][12-1]*(csiB))/(((I12_data[i]/(datos[1][12-1]*200/5))**(csiA))-1))+csiL))
        
        areaTotal4=0
        areaTotal11=0
        areaTotal3=0
        areaTotal12=0
        
        OT4=-durSim
        OT11=-durSim
        OT3=-durSim
        OT12=-durSim
        
        for j in range(len(tg4)-1):
            tiempo=simTime[j]
            tiempo2=simTime[j+1]
            corrienteR41=tg4[j]
            corrienteR111=tg11[j]
            corrienteR31=tg3[j]
            corrienteR121=tg12[j]
            corrienteR42=tg4[j+1]
            corrienteR112=tg11[j+1]
            corrienteR32=tg3[j+1]
            corrienteR122=tg12[j+1]
            base=tiempo2-tiempo
            area4=base*((corrienteR41+corrienteR42)/2)
            area11=base*((corrienteR111+corrienteR112)/2)
            area3=base*((corrienteR31+corrienteR32)/2)
            area12=base*((corrienteR121+corrienteR122)/2)
            areaTotal4=area4+areaTotal4
            areaTotal11=area11+areaTotal11
            areaTotal3=area3+areaTotal3
            areaTotal12=area12+areaTotal12
            
            if areaTotal4<1.01 and areaTotal4>0.99:
                OT4=simTime[j+1]
            elif areaTotal4>-1.01 and areaTotal4<-0.99:
                OT4=-simTime[j+1]
            
            if areaTotal11<1.01 and areaTotal11>0.99:
                OT11=simTime[j+1]
            elif areaTotal11>-1.01 and areaTotal11<-0.99:
                OT11=-simTime[j+1]
                
            if areaTotal3<1.01 and areaTotal3>0.99:
                OT3=simTime[j+1]
            elif areaTotal3>-1.01 and areaTotal3<-0.99:
                OT3=-simTime[j+1]
                
            if areaTotal12<1.01 and areaTotal12>0.99:
                OT12=simTime[j+1]
            elif areaTotal12>-1.01 and areaTotal12<-0.99:
                OT12=-simTime[j+1]
        
        OTsp=[OT4, OT11]
        if(OTsp[0]>0 and OTsp[1]>0):
            OTQ=min(OTsp)
        elif(OTsp[0]<0 and OTsp[1]>0):
            OTQ=OTsp[1]
        elif(OTsp[0]>0 and OTsp[1]<0):
            OTQ=OTsp[0]
        posicionRele=OTsp.index(OTQ)
        releQ=rPrimarios[posicionRele]
        
        #Identificacion de relés primarios y secundarios para transientes CPCS
        if releQ==4:
            releI=11
            releP=3
            releJ=12
            Relay1 = [releQ,releP,releI,releJ,releI,releJ]
            OTP=OT3
            OTIpre=OT11
            OTJpre=OT12

        elif releQ==11:
            releI=4
            releP=12
            releJ=3
            Relay1 = [releQ,releP,releI,releJ,releI,releJ]
            OTP=OT12
            OTIpre=OT4
            OTJpre=OT3
            
        #Calculo de tetas
        tetas=hil.read_analog_signals(signals=['Relay-'+str(Relay1[1])+'.Function (67P).Directional Trip','Relay-'+str(Relay1[5])+'.Function (67P).Directional Trip'])
        
        #Se abre la falla
        hil.set_contactor('Fault-1.S1', swControl=True, swState=False)
        hil.set_contactor('S'+str(releQ), swControl=True, swState=True)
        
        # we will stop simulation
        hil.stop_simulation()
        
        #################################################################################
        #Comienza la parte transiente
        #Se hacen los primas
        hil.start_simulation()
        
        #Se falla el sistema en 180 ciclos
        hil.set_contactor('Fault-1.S1', swControl=True, swState=True, executeAt=tiempoFalla)
        hil.set_contactor('S'+str(releQ), swControl=True, swState=False, executeAt=tiempoFalla+OTQ)
        while hil.get_sim_time()<tiempoFalla:
            esperar=1
        start_capture(duration=durSim, rate=tasaMuestreo, signals=['Relay-'+str(releI)+'.Function (67P).I_A(RMS)','Relay-'+str(releJ)+'.Function (67P).I_A(RMS)'])
        
        captureT = get_capture_results(wait_capture=True) # waits until the 10 second capture elapses
        
        Teta1=tetas+[hil.read_analog_signal(name='Relay-'+str(Relay1[5])+'.Function (67P).Directional Trip')]
        
        #Se abre la falla
        hil.set_contactor('Fault-1.S1', swControl=True, swState=False)
        
        # we will stop simulation
        hil.stop_simulation()
        
        dataCapT=captureT.reset_index().values
        indexT=captureT.index
        
        Ii_data=np.multiply(dataCapT[:,1],1)
        IRe1_data=np.multiply(dataCapT[:,2],1)
        simTimeT=indexT.total_seconds()
        
        ti=[]
        tRe1=[]
        for i in range(len(Ii_data)):
            ti.append(1/(((datos[0][releI-1]*(csiB))/(((Ii_data[i]/(datos[1][releI-1]*200/5))**(csiA))-1))+csiL))
            tRe1.append(1/(((datos[0][Relay1[5]-1]*(csiB))/(((IRe1_data[i]/(datos[1][Relay1[5]-1]*200/5))**(csiA))-1))+csiL))
        
        areaTotaliT=0
        areaTotalRe1T=0
        
        OTi=-durSim
        OTRe1=-durSim     
        for j in range(len(ti)-1):
            tiempoT=simTimeT[j]
            tiempo2T=simTimeT[j+1]
            corrienteRi1=ti[j]
            corrienteRe11=tRe1[j]
            corrienteRi2=ti[j+1]
            corrienteRe12=tRe1[j+1]
            baseT=tiempo2T-tiempoT
            areaiT=baseT*((corrienteRi1+corrienteRi2)/2)
            areaRe1T=baseT*((corrienteRe11+corrienteRe12)/2)
            areaTotaliT=areaiT+areaTotaliT
            areaTotalRe1T=areaRe1T+areaTotalRe1T
            
            if areaTotaliT<1.01 and areaTotaliT>0.99:
                OTi=simTimeT[j+1]
            elif areaTotaliT>-1.01 and areaTotaliT<-0.99:
                OTi=-simTimeT[j+1]
            
            if areaTotalRe1T<1.01 and areaTotalRe1T>0.99:
                OTRe1=simTimeT[j+1]
            elif areaTotalRe1T>-1.01 and areaTotalRe1T<-0.99:
                OTRe1=-simTimeT[j+1]
        
        #Identificacion de relés primarios y secundarios para transientes CPCS
        tiemposOperacion1 = [OTQ,OTP,OTi,OTRe1]
        relesExp1 = [releQ, releP, releI, releJ]
        tetasExp1= [Teta1[0], Teta1[0], Teta1[2], Teta1[2], Teta1[2]]
        #Exportar tiempos de operacion
        tiemposOperacion.append(relesExp1)
        tiemposOperacion.append(tiemposOperacion1)
        tiemposOperacion.append(tetasExp1)
        
    return tiemposOperacion