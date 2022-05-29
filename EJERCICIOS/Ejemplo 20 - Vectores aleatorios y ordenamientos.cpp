
#include <iostream>							//setlocale, cin, cout
#include <stdlib.h>							//Null, memoria dinámica, control de procesos, rand(), srand()
#include <time.h>							//Funciones con fecha y hora

const int T{100};							//T por Tamaño, para el vector a definir.
const int LI{-100};							//Límite inferior números aleatorios.
const int LS{100};							//Límite superior números aleatorios.

using namespace std;						//Usando elementos del nombre de espacio estandar

void inicializarAVector(int [], int);		//Prototipo de función para inicializar un vector con int números aleatorios
void copiarVector(int [], int [], int);		//Copiar un vector
void mostrarVector(int[], int);				//Prototipo de función para mostrar un vector de int elementos
void mostrarV2(int [], int);				//Prototipo de función para mostrar un vector de int elementos sin mucho texto
void ordenarVID(int[], int);				//Prototipo de función para ordenar vector mediante incersión directa
void ordenarVBi(int[], int);				//Prototipo de función para ordenar vector mediante incersión binaria
void ordenarVBu(int[], int);				//Prototipo de función para ordenar vector mediante selección directa por burbuja
void ordenarVS(int[], int);					//Prototipo de función para ordenar vector mediante selección directa SHELL


int main(){												//Función principal
	setlocale(LC_CTYPE, "Spanish");						//Caracteres en castellano
	int seguir{0}, v[T]{}, v2[T]{}, cant{0};			//Control de programa principal, cantidad de elementos del vector y vector original y copia
	do{
		system("cls");																				//Limpiar pantalla
		cout<<"\n\n Bienvenid@ vamos a jugar con vectores llenándolos y ordenándolos."<<endl;
		cout<<"\n\nPara comenzar introducir la longitu del vector [5 - 100]: ";
		do{																							//validando entrada cant
			cin>>cant;
			if((cant<5)||(cant>T)){
				cout<<"Favor ingresar un número entre 5 y 100: ";
			}
		}while((cant<5)||(cant>T));
		inicializarAVector(v,cant);																	//Inicializar vector con números aleatorios, recuerde que en c++ los vectores se
																									//pasan SIEMPRE por referencia.
		mostrarVector(v,cant);																		//Mostrar Vector
		
		//Ahora ordenar y mostrar por diferentes métodos.
		//Como C++ todo paso de parámetro que sea rreglo e spor referencia y no queremos perder el vector original lo copiamos
		cout<<"\n Vector dos esta inicializado con cero y en el vamos a copiar el vector original";
		cout<<"\nVector 2 antes de copiar en el los valores de vector 1: ";
		mostrarVector(v2,cant);
		copiarVector(v, v2, cant);
		cout<<"Vector 2 ahora: ";
		mostrarVector(v2,cant);
		
		cout<<"\n\n Ordenamiento por incersión Directa: ";
		ordenarVID(v2, cant);
		
		//Reseteamos V2
		copiarVector(v, v2, cant);
		cout<<"\n\n Ordenamiento por incersión Binaria: ";
		ordenarVBi(v2, cant);
		
		//Reseteamos V2
		copiarVector(v, v2, cant);
		cout<<"\n\n Ordenamiento por Burbuja: ";
		ordenarVBu(v2, cant);
		
		//Reseteamos y vamos con SHELL
		copiarVector(v, v2, cant);
		cout<<"\n\n Ordenamiento por SHELL: ";
		ordenarVS(v2, cant);
		
		
		cout<<"\n¿Desea volver a ejecutar el programa? (1=Si 2=No): ";
		do{
			cin>>seguir;
			if((seguir<1)||(seguir>2)){
				cout<<"\nOpción no válida.\n¿Desea volver a ejecutar el programa? (1=Si 2=No): ";
			}			
		}while((seguir<1)||(seguir>2));
		
	}while((seguir == 1));
	return 0;
}

//Definiciones de las funciones

void inicializarAVector(int m[], int c){				//En c++ no es necesario indicar el valor de la primera dimensión de un arreglo cuando se usa como parámetro en funciones
	srand(time(NULL));									//Inicializar la función de números aleatorios usando TIME como semilla
	for(int i=0; i<c; i++){
		m[i]	=	LI + rand()%(LS-LI);				//m[i] ahora será un número aleatorio entre los límites inferior y superior		
	}	
}

void mostrarVector(int m[], int c){
	cout<<"\n\n";
	cout<<"Éste es su vector de "<<c<< " elementos: \n\n  Vector = { ";
	for(int i{0}; i<c; i++){
		if(i==c-1){
			cout<<" y "<<m[i]<<" }"<<endl;
		}
		else{
			cout<<m[i]<<", ";
		}
	}
}

void copiarVector(int x[], int y[], int c){
	for(int i{0}; i<c; i++){		y[i]	=	x[i];	}	
}

void mostrarV2(int m[], int c){
	cout<<"\n";
	cout<<"Vector = { ";
	for(int i{0}; i<c; i++){
		if(i==c-1){
			cout<<" y "<<m[i]<<" }"<<endl;
		}
		else{
			cout<<m[i]<<", ";
		}
	}
}

void ordenarVID(int x[], int c){
	int temp{0}, j{0};
	for(int i{0}; i<c; i++){
		temp	=	x[i];
		j		=	i - 1;
		while((x[j]>temp)&&(j>=0)){
			x[j+1]	=	x[j];
			j--;
		}
		x[j+1]	=	temp;
		mostrarV2(x, c);	
	}
}

void ordenarVBi(int x[], int c){
	int j{0}, temp{0}, m{0}, dr{0}, iz{0};
	for(int i{0}; i<c; i++){
		temp	=	x[i];
		iz		=	0;
		dr		=	i-1;
		while(iz <= dr){
			m	=	((iz+dr)/2);
			if(temp<x[m]){
				dr	=	m-1;
			}
			else{
				iz	=	m+1;
			}
		}
		j	=	i-1;
		while(j>=iz){
			x[j+1]	=	x[j];
			j	=	j-1;
		}
		x[iz]	= temp;
		mostrarV2(x, c);
	}		
}

void ordenarVBu(int x[], int c){
	int temp{0};
	for(int i{0}; i<c; i++){
		for(int j{0}; j<c-1; j++){
			if(x[j]> x[j+1]){
				temp	=	x[j];
				x[j]	=	x[j+1];
				x[j+1]	=	temp;
			}
		}
		mostrarV2(x, c);
	}	
}

void ordenarVS(int x[], int c){
	int temp{0}, band{0};
	for(int salto{c/2} ;salto>0; salto /= 2){
		do{
			band	=	0;
			for(int i{0};i<c-salto;i++){
				if(x[i]	>	x[i+salto]){
					temp		=	x[i];
					x[i]		=	x[i+salto];
					x[i+salto]	=	temp; 	
					band		=	1;
				}
			}			
		}while(band==0);
		mostrarV2(x, c);
	}	
}
