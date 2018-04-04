import numpy 
import time

#Declaro al funcion de fibonacci
def Fibonacci(N):
	if(N ==0 or N ==1):
		return N
	else:	
		return Fibonacci(N-1) + Fibonacci(N-2)

#Declaro la funcion que me da el timpo que se demora en hacer algo 	
def get_time(N):
	t0 = time.time()
	Fibonacci(N)
	t1 = time.time()-t0
	return t1	
N = 0

#Aplico la funcion del tiempo para los 35 primeros numeros
while(N<36):
	print N, ",", get_time(N)
	N = N+1
