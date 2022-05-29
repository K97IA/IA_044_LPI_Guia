		
#include <iostream>							//setlocale, cin, cout
#include <stdlib.h>							//Null, memoria dinámica, control de procesos, rand(), srand()
#include <time.h>							//Funciones con fecha y hora
#include <iomanip>							//setw

using namespace std;							//Nombre de espacio estandar en uso

const int FIL{100};								//Constante para filas
const int COL{100};								//Constante para columnas
const int LI{-100};								//Límite inferior para números aleatorios
const int LS{100};								//Límite superior para números aleatorios

void llenarM(int [][COL], int, int);						//Prototipo función llenar matriz con números aleatorios note como colocamos el valor de la segunda dimensión.
void imprimirM(int[][COL], int, int);						//Prototipo función Imprimir Matriz
void imprimirM2(int[][COL], int, int);						//Prototipo función Imprimir Matriz con borde
void sumarM(int[][COL], int[][COL], int[][COL], int, int);	//Prototipo función Sumar dos matrices
int  mayores(int[][COL],int,int,int);						//Prototipo función contar números mayores a

int main(){													//Función principal
	setlocale(LC_CTYPE,"Spanish");
	int m1[FIL][COL]{0},m2[FIL][COL]{0}, m3[FIL][COL]{};									//Matrices a usar
	int seguir{0}, f{0}, c{0}, n{0};														//Seguir, filas y columnas para la matriz además un número n como base y un contador.
	system("cls");																			//Limpiar la pantalla
	cout<<setw(15)<<"Bienvenid@ a este programa que suma dos matrices";
	do{																						//Bloque para repetir mientras el usuario así lo desee
		cout<<endl;
		cout<<setw(5)<<"Favor ingresar cantidad de filas de las matrices [1-100]: ";
		do{																					//Bloque para validar filas entre 0 y 100
			cin>>f;
			if((f<1)||(f>100)){
				cout<<setw(5)<<"Cantidad de filas entre [1-100]: "; 
			}	
		}while((f<1)||(f>100));
		cout<<endl;
		cout<<setw(5)<<"Favor ingresar cantidad de columnas de las matrices [1-100]: ";
		do{																					//Bloque para validar columnas entre 0 y 100
			cin>>c;
			if((c<1)||(c>100)){
				cout<<setw(5)<<"Cantidad de columnas entre [1-100]: "; 
			}	
		}while((c<1)||(c>100));
		//Ahora vamos a llenar las matric3s de fxc con números aleatorios
		llenarM(m1, f, c);
		cout<<"\n Presione <<enter>> para continuar: ";
		system("pause");
		llenarM(m2, f, c);
		//Sumamos ambas matrices
		sumarM(m1, m2, m3, f, c);
		//Mostramos m1, m2 y su suma
		system("cls");
		cout<<setw(10)<<"Matriz M1: "<<endl;
		imprimirM(m1, f, c);
		cout<<endl;
		cout<<setw(10)<<"Matriz M2: "<<endl;
		imprimirM(m2, f, c);
		cout<<endl;
		cout<<setw(10)<<"Matriz M1+M2: "<<endl;
		imprimirM2(m3, f, c);
		cout<<endl;
		//Recorrer a la matriz con un criterio
		cout<<"\n Ingrese un número para buscar sus mayores en M1+M2: ";
		cin>>n;
		cout<<"\n\n Esta es la cantidad de números mayores a "<<n<<" en M1+M2: "<<mayores(m3,f,c,n);
		cout<<"\n\nDesea seguir 1=si 2=no: ";
		do{																					//Bloque para validar entrada para seguir
			cin>>seguir;
			if((seguir<1)||(seguir>2)){
				cout<<"Desea seguir 1=si 2=no: ";
			}
		}while((seguir<1)||(seguir>2));		
	}while(seguir==1);
	return 0;
}


void llenarM(int x[][COL], int f, int c){						//Función llenar matriz con números aleatorios note como colocamos el valor de la segunda dimensión.
	srand(time(NULL));											//Inicializar la función de números aleatorios usando TIME como semilla
	for(int i=0; i<f; i++){										//Control de filas	  (dimensión 1)
		for(int j{0}; j<c; j++){								//Control de columnas (dimensión 2)
				x[i][j]	=	LI + rand()%(LS-LI);				//x[i][j] ahora será un número aleatorio entre los límites inferior y superior	
		}		
	}
}

void imprimirM(int x[][COL], int f, int c){						//Función Imprimir Matriz
	cout<<setw(12)<<" |";
	for(int i{0};i<c;i++){
		cout<<setw(5)<<i;
	}
	cout<<endl;
	for(int i=0; i<f; i++){	
		cout<<setw(10)<<i<<" |";								//Control de filas	  (dimensión 1)
		for(int j{0}; j<c; j++){								//Control de columnas (dimensión 2)
				cout<<setw(5)<<x[i][j];							//x[i][j] es un número aleatorio entre los límites inferior y superior	
		}	
		cout<<endl;	
	}
}

void sumarM(int x[][COL], int y[][COL], int z[][COL], int f, int c){	//Función Sumar dos matrices
	for(int i=0; i<f; i++){												//Control de filas	  (dimensión 1)
		for(int j{0}; j<c; j++){										//Control de columnas (dimensión 2)
				z[i][j]	=	x[i][j]	+ y[i][j];							//M3[i][j] ahora será la suma de M1[i][j]	y M2[i][j]		
		}		
	}
}

int  mayores(int x[][COL], int f,int c, int n){						//Función contar números mayores a
	int cuenta{0};
	for(int i=0; i<f; i++){												//Control de filas	  (dimensión 1)
		for(int j{0}; j<c; j++){										//Control de columnas (dimensión 2)
				if(x[i][j]>n){
					cuenta++;
				}
		}		
	}
	return cuenta;
}

void imprimirM2(int x[][COL], int f, int c){							//Función Imprimir Matriz con borde
	cout<<setw(11)<<" |";
	cout<<"*";
	for(int i{0};i<c;i++){
		cout<<" ";
		cout<<setw(3)<<i;
		cout<<"   ";
	}
	cout<<"*"<<endl;
	for(int i=0; i<f; i++){										//Control de filas	  (dimensión 1)
		
		cout<<setw(11)<<" |";	
		cout<<"*";							
		for(int j{0}; j<c; j++){								
				cout<<setw(7)<<"*******";								
		}	
		cout<<"*"<<endl;	
	
		cout<<setw(9)<<i<<" |";
		cout<<"*";								
		for(int j{0}; j<c; j++){								//Control de columnas (dimensión 2)
				cout<<"*";
				cout<<setw(4)<<x[i][j];							//x[i][j] es un número aleatorio entre los límites inferior y superior	
				cout<<" *";
		}	
		cout<<"*"<<endl;	
		
		if(i==f-1){
			cout<<setw(11)<<" |";	
			cout<<"*";							
			for(int j{0}; j<c; j++){								
				cout<<setw(7)<<"*******";								
			}	
			cout<<"*"<<endl;	
		}		
	}
}



/*     |  0 1 2 
     0 |  0 0 0
     1 |  0 0 0 
     
       |  0     1     2
       | ***************
      0| * 0 ** 0 ** 0 *
       | ***************
      1| * 0 ** 0 ** 0 *
       | ***************  */
