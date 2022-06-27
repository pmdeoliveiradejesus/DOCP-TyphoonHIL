#Importar librerias de typhoon
from typhoon.api.schematic_editor import SchematicAPI
import typhoon.api.hil as hil
from typhoon.api.schematic_editor.const import HANDLER_MASK_INIT, \
    HANDLER_PROPERTY_VALUE_CHANGED, WIDGET_COMBO
from typhoon.api.schematic_editor import const
import typhoon.api.hil as hil
import numpy as np
import pandas as pd
import time

#calculando tiempo de simulación
start=time.time()

#Importar funciones de cada linea
import archivoLin1
import archivoLin2
import archivoLin3
import archivoLin4
import archivoLin5
import archivoLin6
import archivoLin7

#Se define el modelo
mdl = SchematicAPI()

#Se fija el número de fallas que se harán por línea
nFallas=2

#Se fija el tiempo de falla
tiempoFalla=180/60
tasaCaptura=1000#n/s
durSim=10#s

#Define relay data
TMSdes=[0.342,0.211,0.360,0.346,0.347,0.363,0.212,0.313,0.427,0.354,0.339,0.421,0.477,0.479]
IpickUpdes=[0.5,0.12,0.24,0.12,0.12,0.24,0.12,0.6,0.18,0.12,0.12,0.18,0.12,0.12]
tipoCurva="IEC Standard Inverse"

IpickUpdes=np.multiply(IpickUpdes,(5000/200))
TMS=[TMSdes[10],TMSdes[0],TMSdes[2],TMSdes[4],TMSdes[6],TMSdes[8],TMSdes[13],TMSdes[11],TMSdes[1],TMSdes[3],TMSdes[5],TMSdes[7],TMSdes[9],TMSdes[12]]
IpickUp=[IpickUpdes[10],IpickUpdes[0],IpickUpdes[2],IpickUpdes[4],IpickUpdes[6],IpickUpdes[8],IpickUpdes[13],IpickUpdes[11],IpickUpdes[1],IpickUpdes[3],IpickUpdes[5],IpickUpdes[7],IpickUpdes[9],IpickUpdes[12]]
datos=[TMS,IpickUp]

#Se crean los vectores que se retornan de las funciones

data1=[]

data2=[]

data3=[]

data4=[]

data5=[]

data6=[]

data7=[]

#Se cargan los archivos
esquematico1="Line-1-Fault.tse"
rutaCpd1=r'C:\Users\JUAN DAVID\Escritorio\universidad\Maestria 3\Tesis 2\Call for chapters\Programación\Line-1-Fault Target files\Line-1-Fault.cpd'

esquematico2="Line-2-Fault.tse"
rutaCpd2=r'C:\Users\JUAN DAVID\Escritorio\universidad\Maestria 3\Tesis 2\Call for chapters\Programación\Line-2-Fault Target files\Line-2-Fault.cpd'

esquematico3="Line-3-Fault.tse"
rutaCpd3=r'C:\Users\JUAN DAVID\Escritorio\universidad\Maestria 3\Tesis 2\Call for chapters\Programación\Line-3-Fault Target files\Line-3-Fault.cpd'

esquematico4="Line-4-Fault.tse"
rutaCpd4=r'C:\Users\JUAN DAVID\Escritorio\universidad\Maestria 3\Tesis 2\Call for chapters\Programación\Line-4-Fault Target files\Line-4-Fault.cpd'

esquematico5="Line-5-Fault.tse"
rutaCpd5=r'C:\Users\JUAN DAVID\Escritorio\universidad\Maestria 3\Tesis 2\Call for chapters\Programación\Line-5-Fault Target files\Line-5-Fault.cpd'

esquematico6="Line-6-Fault.tse"
rutaCpd6=r'C:\Users\JUAN DAVID\Escritorio\universidad\Maestria 3\Tesis 2\Call for chapters\Programación\Line-6-Fault Target files\Line-6-Fault.cpd'

esquematico7="Line-7-Fault.tse"
rutaCpd7=r'C:\Users\JUAN DAVID\Escritorio\universidad\Maestria 3\Tesis 2\Call for chapters\Programación\Line-7-Fault Target files\Line-7-Fault.cpd'

#Se llaman las funciones
print("LLamando funcion 1")
data1=archivoLin1.funAr1(esquematico1,rutaCpd1,datos, tipoCurva, nFallas, tiempoFalla, tasaCaptura, durSim)
print("data linea1",data1)

print("LLamando funcion 2")
data2=archivoLin2.funAr2(esquematico2,rutaCpd2,datos, tipoCurva, nFallas, tiempoFalla, tasaCaptura, durSim)
print("data linea2",data2)

print("LLamando funcion 3")
data3=archivoLin3.funAr3(esquematico3,rutaCpd3,datos, tipoCurva, nFallas, tiempoFalla, tasaCaptura, durSim)
print("data linea3",data3)

print("LLamando funcion 4")
data4=archivoLin4.funAr4(esquematico4,rutaCpd4,datos, tipoCurva, nFallas, tiempoFalla, tasaCaptura, durSim)
print("data linea4",data4)

print("LLamando funcion 5")
data5=archivoLin5.funAr5(esquematico5,rutaCpd5,datos, tipoCurva, nFallas, tiempoFalla, tasaCaptura, durSim)
print("data linea5",data5)

print("LLamando funcion 6")
data6=archivoLin6.funAr6(esquematico6,rutaCpd6,datos, tipoCurva, nFallas, tiempoFalla, tasaCaptura, durSim)
print("data linea6",data6)

print("LLamando funcion 7")
data7=archivoLin7.funAr7(esquematico7,rutaCpd7,datos, tipoCurva, nFallas, tiempoFalla, tasaCaptura, durSim)
print("data linea7",data7)

# and end script
hil.end_script_by_user()

# Close the model
mdl.close_model()