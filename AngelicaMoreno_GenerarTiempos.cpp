#include <iostream>
#include <math.h>
#include <ctime>

using std::cout;
using std::endl;

using namespace std;

//Declaracion de la funcion de fibonacci
int Fibonacci(int N);

//Declaracion de get_time
float get_time(int N);


//Defino la funcion de fibbonacci RECURSIVA(se llama a si misma)
int Fibonacci(int N){
	//Caso base (F0 = 0 y F1 = 1)
	if(N==0 || N==1){
		
		return N;
	}
	else{
		return Fibonacci(N-1) + Fibonacci(N-2);
	}

}

//Defino la funcion de get_time Qque obtiene el tiempo de alguna operacion
float get_time(int N){
	clock_t t;
	t = clock();
	//La operacion de la que quiero sacar el tiempo
	Fibonacci(N);
	t = clock() - t;
	float time = ((float)t)/CLOCKS_PER_SEC;
}

int main() {
	//Variable del numero al que se le calculan las funciones 
	int N=0;
	//Pruebo que funcione mi funcion para un numero imprimiendolo 
	//cout << Fibonacci(20) <<endl;
	
	//Pruebo que funcione la funcion del tiempo para Fibonacci
	//cout << "tiempo:" << get_time(20) <<endl;

	//Imprime Fibonacci para los primeros 35 numeros con su respectivo N
	while(N<36){ 
		cout << N << "tiempo:" << get_time(N) <<endl;
		N++;}

return 0;
}
