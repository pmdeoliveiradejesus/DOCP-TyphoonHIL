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
D = 9

def funAr5(model, hcpd, datos, tipoCurva, nFallas, tiempoFalla, tasaMuestreo, durSim):
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
    Relays=[13,6,8,5,14]
    rPrimarios=[13,6]
    BetaT=list()
    TetaT=list()
    relesEXP=list()
    tiemposOperacion=list()

    #Se configura el tipo de función del relé
    rele13 = mdl.get_item("Relay-13", item_type=const.ITEM_MASKED_COMPONENT)
    rele6 = mdl.get_item("Relay-6", item_type=const.ITEM_MASKED_COMPONENT)
    rele8 = mdl.get_item("Relay-8", item_type=const.ITEM_MASKED_COMPONENT)
    rele5 = mdl.get_item("Relay-5", item_type=const.ITEM_MASKED_COMPONENT)
    rele14 = mdl.get_item("Relay-14", item_type=const.ITEM_MASKED_COMPONENT)

    mdl.set_property_value (mdl.prop(rele13, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele6, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele8, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele5, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele14, "function"), tipoCurva)

    contadorF=0

    for i in range(len(l1)):
        contadorF=contadorF+1
        print("La falla es la ", contadorF)

        #CPCS
        Line1 = mdl.get_item("Line-5_section-1", item_type=const.ITEM_MASKED_COMPONENT)
        Line2 = mdl.get_item("Line-5_section-2", item_type=const.ITEM_MASKED_COMPONENT)
        
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
        start_capture(duration=durSim, rate=tasaMuestreo, signals=["Relay-13.Function (67P).I_A(RMS)","Relay-6.Function (67P).I_A(RMS)","Relay-8.Function (67P).I_A(RMS)","Relay-5.Function (67P).I_A(RMS)","Relay-14.Function (67P).I_A(RMS)"])
        # do something in meantime which takes 10 seconds...
        capture = get_capture_results(wait_capture=True) # waits until the 10 second capture elapses
        
        dataCap=capture.reset_index().values
        index=capture.index
        I13_data=np.multiply(dataCap[:,1],1)
        I6_data=np.multiply(dataCap[:,2],1)
        I8_data=np.multiply(dataCap[:,3],1)
        I5_data=np.multiply(dataCap[:,4],1)
        I14_data=np.multiply(dataCap[:,5],1)
        simTime=index.total_seconds()
        
        tg13=[]
        tg6=[]
        tg8=[]
        tg5=[]
        tg14=[]
        for i in range(len(I13_data)):
            tg13.append(1/(((datos[0][13-1]*(csiB))/(((I13_data[i]/(datos[1][13-1]*200/5))**(csiA))-1))+csiL))
            tg6.append(1/(((datos[0][6-1]*(csiB))/(((I6_data[i]/(datos[1][6-1]*200/5))**(csiA))-1))+csiL))
            tg8.append(1/(((datos[0][8-1]*(csiB))/(((I8_data[i]/(datos[1][8-1]*200/5))**(csiA))-1))+csiL))
            tg5.append(1/(((datos[0][5-1]*(csiB))/(((I5_data[i]/(datos[1][5-1]*200/5))**(csiA))-1))+csiL))
            tg14.append(1/(((datos[0][14-1]*(csiB))/(((I14_data[i]/(datos[1][14-1]*200/5))**(csiA))-1))+csiL))
        
        areaTotal13=0
        areaTotal6=0
        areaTotal8=0
        areaTotal5=0
        areaTotal14=0
        
        OT13=-durSim
        OT6=-durSim
        OT8=-durSim
        OT5=-durSim
        OT14=-durSim
        
        for j in range(len(tg13)-1):
            tiempo=simTime[j]
            tiempo2=simTime[j+1]
            corrienteR131=tg13[j]
            corrienteR61=tg6[j]
            corrienteR81=tg8[j]
            corrienteR51=tg5[j]
            corrienteR141=tg14[j]
            corrienteR132=tg13[j+1]
            corrienteR62=tg6[j+1]
            corrienteR82=tg8[j+1]
            corrienteR52=tg5[j+1]
            corrienteR142=tg14[j+1]
            base=tiempo2-tiempo
            area13=base*((corrienteR131+corrienteR132)/2)
            area6=base*((corrienteR61+corrienteR62)/2)
            area8=base*((corrienteR81+corrienteR82)/2)
            area5=base*((corrienteR51+corrienteR52)/2)
            area14=base*((corrienteR141+corrienteR142)/2)
            areaTotal13=area13+areaTotal13
            areaTotal6=area6+areaTotal6
            areaTotal8=area8+areaTotal8
            areaTotal5=area5+areaTotal5
            areaTotal14=area14+areaTotal14
            
            if areaTotal13<1.01 and areaTotal13>0.99:
                OT13=simTime[j+1]
            elif areaTotal13>-1.01 and areaTotal13<-0.99:
                OT13=-simTime[j+1]
            
            if areaTotal6<1.01 and areaTotal6>0.99:
                OT6=simTime[j+1]
            elif areaTotal6>-1.01 and areaTotal6<-0.99:
                OT6=-simTime[j+1]
                
            if areaTotal8<1.01 and areaTotal8>0.99:
                OT8=simTime[j+1]
            elif areaTotal8>-1.01 and areaTotal8<-0.99:
                OT8=-simTime[j+1]
                
            if areaTotal5<1.01 and areaTotal5>0.99:
                OT5=simTime[j+1]
            elif areaTotal5>-1.01 and areaTotal5<-0.99:
                OT5=-simTime[j+1]
                
            if areaTotal14<1.01 and areaTotal14>0.99:
                OT14=simTime[j+1]
            elif areaTotal14>-1.01 and areaTotal14<-0.99:
                OT14=-simTime[j+1]
        
        OTsp=[OT13, OT6]
        if(OTsp[0]>0 and OTsp[1]>0):
            OTQ=min(OTsp)
        elif(OTsp[0]<0 and OTsp[1]>0):
            OTQ=OTsp[1]
        elif(OTsp[0]>0 and OTsp[1]<0):
            OTQ=OTsp[0]
        posicionRele=OTsp.index(OTQ)
        releQ=rPrimarios[posicionRele]
        
        #Identificacion de relés primarios y secundarios para transientes CPCS
        if releQ==13:
            releI=6
            releP=8
            releJ1=5
            releJ2=14
            Relay1 = [releQ,releP,releI,releJ1,releI,releJ1]
            Relay2 = [releQ,releP,releI,releJ2,releI,releJ2]
            OTIpre=OT6
            OTP=OT8
            OTJ1pre=OT5
            OTJ2pre=OT14

        elif releQ==6:
            releI=13
            releP1=5
            releP2=14
            releJ=8
            Relay1 = [releQ,releP1,releI,releJ,releI,releJ]
            Relay2 = [releQ,releP2,releI,releJ,releI,releJ]
            OTIpre=OT13
            OTP1=OT5
            OTP2=OT14
            OTJpre=OT8
        
        #Calculo de tetas
        tetas=hil.read_analog_signals(signals=['Relay-'+str(Relay1[1])+'.Function (67P).Directional Trip','Relay-'+str(Relay1[5])+'.Function (67P).Directional Trip'])
        
        #Se abre la falla
        hil.set_contactor('Fault-1.S1', swControl=True, swState=False)
        
        # we will stop simulation
        hil.stop_simulation()
        
        ###############################################################################3
        #Comienza el transiente
        #Se hacen los primas
        hil.start_simulation()
        
        #Se falla el sistema en 180 ciclos
        hil.set_contactor('Fault-1.S1', swControl=True, swState=True, executeAt=tiempoFalla)
        hil.set_contactor('S'+str(releQ), swControl=True, swState=False, executeAt=tiempoFalla+OTQ)
        while hil.get_sim_time()<tiempoFalla:
            esperar=1
        start_capture(duration=durSim, rate=tasaMuestreo, signals=['Relay-'+str(releI)+'.Function (67P).I_A(RMS)','Relay-'+str(Relay1[5])+'.Function (67P).I_A(RMS)','Relay-'+str(Relay2[5])+'.Function (67P).I_A(RMS)'])
        
        captureT = get_capture_results(wait_capture=True) # waits until the 10 second capture elapses
        
        Teta1=tetas+[hil.read_analog_signal(name='Relay-'+str(Relay1[5])+'.Function (67P).Directional Trip')]
        Teta2=tetas+[hil.read_analog_signal(name='Relay-'+str(Relay2[5])+'.Function (67P).Directional Trip')]
        
        #Se abre la falla
        hil.set_contactor('Fault-1.S1', swControl=True, swState=False)
        hil.set_contactor('S'+str(releQ), swControl=True, swState=True)
        
        # we will stop simulation
        hil.stop_simulation()
        
        dataCapT=captureT.reset_index().values
        indexT=captureT.index
        
        if releQ==13:
            Ii_data=np.multiply(dataCapT[:,1],1)
            IRe1_data=np.multiply(dataCapT[:,2],1)
            IRe2_data=np.multiply(dataCapT[:,3],1)
        if releQ==6:
            Ii_data=np.multiply(dataCapT[:,1],1)
            IRe1_data=np.multiply(dataCapT[:,2],1)
            IRe2_data=IRe1_data
        simTimeT=indexT.total_seconds()
        
        ti=[]
        tRe1=[]
        tRe2=[]
        for i in range(len(I13_data)):
            ti.append(1/(((datos[0][releI-1]*(csiB))/(((Ii_data[i]/(datos[1][releI-1]*200/5))**(csiA))-1))+csiL))
            tRe1.append(1/(((datos[0][Relay1[5]-1]*(csiB))/(((IRe1_data[i]/(datos[1][Relay1[5]-1]*200/5))**(csiA))-1))+csiL))
            tRe2.append(1/(((datos[0][Relay2[5]-1]*(csiB))/(((IRe2_data[i]/(datos[1][Relay2[5]-1]*200/5))**(csiA))-1))+csiL))
        
        areaTotaliT=0
        areaTotalRe1T=0
        areaTotalRe2T=0
        
        OTi=-durSim
        OTRe1=-durSim
        OTRe2=-durSim
        
        for j in range(len(ti)-1):
            tiempoT=simTimeT[j]
            tiempo2T=simTimeT[j+1]
            corrienteRi1=ti[j]
            corrienteRe11=tRe1[j]
            corrienteRe21=tRe2[j]
            corrienteRi2=ti[j+1]
            corrienteRe12=tRe1[j+1]
            corrienteRe22=tRe2[j+1]
            baseT=tiempo2T-tiempoT
            areaiT=baseT*((corrienteRi1+corrienteRi2)/2)
            areaRe1T=baseT*((corrienteRe11+corrienteRe12)/2)
            areaRe2T=baseT*((corrienteRe21+corrienteRe22)/2)
            areaTotaliT=areaiT+areaTotaliT
            areaTotalRe1T=areaRe1T+areaTotalRe1T
            areaTotalRe2T=areaRe2T+areaTotalRe2T
            
            if areaTotaliT<1.01 and areaTotaliT>0.99:
                OTi=simTimeT[j+1]
            elif areaTotaliT>-1.01 and areaTotaliT<-0.99:
                OTi=-simTimeT[j+1]
            
            if areaTotalRe1T<1.01 and areaTotalRe1T>0.99:
                OTRe1=simTimeT[j+1]
            elif areaTotalRe1T>-1.01 and areaTotalRe1T<-0.99:
                OTRe1=-simTimeT[j+1]
                
            if areaTotalRe2T<1.01 and areaTotalRe2T>0.99:
                OTRe2=simTimeT[j+1]
            elif areaTotalRe2T>-1.01 and areaTotalRe2T<-0.99:
                OTRe2=-simTimeT[j+1]
        
        #Identificacion de relés primarios y secundarios para transientes CPCS
        #Identificacion de relés primarios y secundarios para transientes CPCS
        if releQ==13:
            tiemposOperacion1 = [OTQ,OTP,OTi,OTRe1,OTRe2]
            relesExp1 = [releQ, releP, releI, releJ1, releJ2]

        elif releQ==6:
            tiemposOperacion1 = [OTQ,OTP1,OTP2,OTi,OTRe1]
            relesExp1 = [releQ, releP1, releP2, releI, releJ]
        
        tetasExp1= [Teta1[0], Teta1[0], Teta1[2], Teta1[2], Teta2[2]]
        #Exportar tiempos de operacion
        tiemposOperacion.append(relesExp1)
        tiemposOperacion.append(tiemposOperacion1)
        tiemposOperacion.append(tetasExp1)
        
    return tiemposOperacion