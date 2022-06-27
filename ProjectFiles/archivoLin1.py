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
D = 7

def funAr1(model, hcpd, datos, tipoCurva, nFallas, tiempoFalla, tasaMuestreo, durSim):
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
    Relays=[9,2,10,1,7]
    rPrimarios=[9,2]
    relesEXP=list()
    tiemposOperacion=list()

    #Se configura el tipo de función del relé
    rele9 = mdl.get_item("Relay-9", item_type=const.ITEM_MASKED_COMPONENT)
    rele2 = mdl.get_item("Relay-2", item_type=const.ITEM_MASKED_COMPONENT)
    rele10 = mdl.get_item("Relay-10", item_type=const.ITEM_MASKED_COMPONENT)
    rele1 = mdl.get_item("Relay-1", item_type=const.ITEM_MASKED_COMPONENT)
    rele7 = mdl.get_item("Relay-7", item_type=const.ITEM_MASKED_COMPONENT)

    mdl.set_property_value (mdl.prop(rele9, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele2, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele10, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele1, "function"), tipoCurva)
    mdl.set_property_value (mdl.prop(rele7, "function"), tipoCurva)

    contadorF=0

    for i in range(len(l1)):
        contadorF=contadorF+1
        print("La falla es la ", contadorF)

        #CPCS
        Line1 = mdl.get_item("Line-1_section-1", item_type=const.ITEM_MASKED_COMPONENT)
        Line2 = mdl.get_item("Line-1_section-2", item_type=const.ITEM_MASKED_COMPONENT)
        
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
        start_capture(duration=durSim, rate=tasaMuestreo, signals=["Relay-9.Function (67P).I_A(RMS)","Relay-2.Function (67P).I_A(RMS)","Relay-10.Function (67P).I_A(RMS)","Relay-7.Function (67P).I_A(RMS)","Relay-1.Function (67P).I_A(RMS)"])
        # do something in meantime which takes 10 seconds...
        capture = get_capture_results(wait_capture=True) # waits until the 10 second capture elapses
        
        dataCap=capture.reset_index().values
        index=capture.index
        I9_data=np.multiply(dataCap[:,1],1)
        I2_data=np.multiply(dataCap[:,2],1)
        I10_data=np.multiply(dataCap[:,3],1)
        I7_data=np.multiply(dataCap[:,4],1)
        I1_data=np.multiply(dataCap[:,5],1)
        simTime=index.total_seconds()
            
        tg2=[]
        tg9=[]
        tg10=[]
        tg7=[]
        tg1=[]
        for i in range(len(I9_data)):
            tg2.append(1/(((datos[0][2-1]*(csiB))/(((I2_data[i]/(datos[1][2-1]*200/5))**(csiA))-1))+csiL))
            tg9.append(1/(((datos[0][9-1]*(csiB))/(((I9_data[i]/(datos[1][9-1]*200/5))**(csiA))-1))+csiL))
            tg10.append(1/(((datos[0][10-1]*(csiB))/(((I10_data[i]/(datos[1][10-1]*200/5))**(csiA))-1))+csiL))
            tg7.append(1/(((datos[0][7-1]*(csiB))/(((I7_data[i]/(datos[1][7-1]*200/5))**(csiA))-1))+csiL))
            tg1.append(1/(((datos[0][1-1]*(csiB))/(((I1_data[i]/(datos[1][1-1]*200/5))**(csiA))-1))+csiL))
        
        areaTotal2=0
        areaTotal9=0
        areaTotal10=0
        areaTotal7=0
        areaTotal1=0
        
        OT2=-durSim
        OT9=-durSim
        OT10=-durSim
        OT7=-durSim
        OT1=-durSim
        
        for j in range(len(tg2)-1):
            tiempo=simTime[j]
            tiempo2=simTime[j+1]
            corrienteR21=tg2[j]
            corrienteR91=tg9[j]
            corrienteR101=tg10[j]
            corrienteR71=tg7[j]
            corrienteR11=tg1[j]
            corrienteR22=tg2[j+1]
            corrienteR92=tg9[j+1]
            corrienteR102=tg10[j+1]
            corrienteR72=tg7[j+1]
            corrienteR12=tg1[j+1]
            base=tiempo2-tiempo
            area2=base*((corrienteR21+corrienteR22)/2)
            area9=base*((corrienteR91+corrienteR92)/2)
            area10=base*((corrienteR101+corrienteR102)/2)
            area7=base*((corrienteR71+corrienteR72)/2)
            area1=base*((corrienteR11+corrienteR12)/2)
            areaTotal2=area2+areaTotal2
            areaTotal9=area9+areaTotal9
            areaTotal10=area10+areaTotal10
            areaTotal7=area7+areaTotal7
            areaTotal1=area1+areaTotal1
            
            if areaTotal2<1.01 and areaTotal2>0.99:
                OT2=simTime[j+1]
            elif areaTotal2>-1.01 and areaTotal2<-0.99:
                OT2=-simTime[j+1]
            
            if areaTotal9<1.01 and areaTotal9>0.99:
                OT9=simTime[j+1]
            elif areaTotal9>-1.01 and areaTotal9<-0.99:
                OT9=-simTime[j+1]
                
            if areaTotal10<1.01 and areaTotal10>0.99:
                OT10=simTime[j+1]
            elif areaTotal10>-1.01 and areaTotal10<-0.99:
                OT10=-simTime[j+1]
                
            if areaTotal7<1.01 and areaTotal7>0.99:
                OT7=simTime[j+1]
            elif areaTotal7>-1.01 and areaTotal7<-0.99:
                OT7=-simTime[j+1]
                
            if areaTotal1<1.01 and areaTotal1>0.99:
                OT1=simTime[j+1]
            elif areaTotal1>-1.01 and areaTotal1<-0.99:
                OT1=-simTime[j+1]
        
        OTsp=[OT9, OT2]
        if(OTsp[0]>0 and OTsp[1]>0):
            OTQ=min(OTsp)
        elif(OTsp[0]<0 and OTsp[1]>0):
            OTQ=OTsp[1]
        elif(OTsp[0]>0 and OTsp[1]<0):
            OTQ=OTsp[0]
        posicionRele=OTsp.index(OTQ)
        releQ=rPrimarios[posicionRele]
        
        #Identificacion de relés primarios y secundarios para transientes CPCS
        if releQ==9:
            releI=2
            releP=10
            releJ1=1
            releJ2=7
            Relay1 = [releQ,releP,releI,releJ1,releI,releJ1]
            Relay2 = [releQ,releP,releI,releJ2,releI,releJ2]
            OTIpre=OT2
            OTP=OT10
            OTJ1pre=OT1
            OTJ2pre=OT7

        elif releQ==2:
            releI=9
            releP1=1
            releP2=7
            releJ=10
            Relay1 = [releQ,releP1,releI,releJ,releI,releJ]
            Relay2 = [releQ,releP2,releI,releJ,releI,releJ]
            OTIpre=OT9
            OTP1=OT1
            OTP2=OT7
            OTJpre=OT10

        #Calculo de tetas
        tetas=hil.read_analog_signals(signals=['Relay-'+str(Relay1[1])+'.Function (67P).Directional Trip','Relay-'+str(Relay1[5])+'.Function (67P).Directional Trip'])

        #Se abre la falla
        hil.set_contactor('Fault-1.S1', swControl=True, swState=False)
        
        # we will stop simulation
        hil.stop_simulation()
        
        #################################################################################
        #Comienza parte transiente 
        
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
        
        if releQ==9:
            Ii_data=np.multiply(dataCapT[:,1],1)
            IRe1_data=np.multiply(dataCapT[:,2],1)
            IRe2_data=np.multiply(dataCapT[:,3],1)
        if releQ==2:
            Ii_data=np.multiply(dataCapT[:,1],1)
            IRe1_data=np.multiply(dataCapT[:,2],1)
            IRe2_data=IRe1_data
        simTimeT=indexT.total_seconds()
        
        ti=[]
        tRe1=[]
        tRe2=[]
        for i in range(len(Ii_data)):
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
        if releQ==9:
            tiemposOperacion1 = [OTQ,OTP,OTi,OTRe1,OTRe2]
            relesExp1 = [releQ, releP, releI, releJ1, releJ2]
        elif releQ==2:
            tiemposOperacion1 = [OTQ,OTP1,OTP2,OTi,OTRe1]
            relesExp1 = [releQ, releP1, releP2, releI, releJ]
        tetasExp1= [Teta1[0], Teta1[0], Teta1[2], Teta1[2], Teta2[2]]
        #Exportar tiempos de operacion
        tiemposOperacion.append(relesExp1)
        tiemposOperacion.append(tiemposOperacion1)
        tiemposOperacion.append(tetasExp1)
        
    return tiemposOperacion