import numpy
import matplotlib as plt

#Subir los archivos  
tiempos_python = np.genfromtxt(times_python.csv)
tiempos_cpp = np.genfromtxt(times_python.csv)

#Selecciono las columnas a graficar 
x1 = tiempos_python[:,0]
y1 = tiempos_python[0,:]

x2 = tiempos_cpp[:,0]
y2 = tiempos_cpp[0,:]

#Graficar

plt.figure()
plt.plot(x1,y1)
plt.plot(x2,y2)
plt.savefig(cpp_vs_python.png)

