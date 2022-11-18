
#include<iostream>
#include <stdlib.h>							//Null, memoria dinámica, control de procesos, rand(), srand()
#include <time.h>							//Funciones con fecha y hora
#include <iomanip>							//setw
#include <string.h>							//Manejo de cadenas, corregir problema con espacios en blanco en nombres

using namespace std;

const int T{100};							//Tamaño para arreglos
const int LI{0};						//Límite inferior nota exámenes
const int LS{100};						//Límite superior nota exámenes
const int E{4};							//Constante para cantidad de exámenes

struct Alumno{							//struct alumno
	string	nombre{};					//Cada alumno posee un nombre
	double	notas[10]{};				//Cada alumno tiene espacio para 10 notas de momento esto es 4 examenes y un promedio
};

void leerA(Alumno [], int);			//Prototipo de función para leer alumnos
void mostrarA(Alumno [], int);		//Prototipo de función para mostrar alumnos
void ordenarA(Alumno [], int);		//Prototipo de función para ordenar alumnos 
void notasA(double [], int);		//Asignar 4 notas aleatoriamente (con fines didácticos)
void calcularP(double [], int);		//Prototipo función para calcular promedio

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int seguir{0};
	int c{5};
	Alumno	grupoA[c];
	cout<<"\n Bienvenidos";
	do{
		cout<<"\nVamos a comenzar mostrando los espacios para los estudiantes: "<<endl;
		mostrarA(grupoA, c);
		system("Pause");
		cout<<"\nProseguimos con el llenando de los datos de los estudiantes: "<<endl;
		leerA(grupoA, c);
		cout<<"\nMostramos los estudiantes: "<<endl;
		mostrarA(grupoA, c);
		cout<<"\n\n AHORA VAMOS A ORDENARLOS POR PROMEDIO!!"<<endl;
		ordenarA(grupoA, c);
		system("Pause");
		mostrarA(grupoA, c);
		
		cout<<"\n Desea correr el programa de nuevo 1=si 2=no: ";
		do{
			cin>>seguir;
			if((seguir<1)||(seguir>2)){
				cout<<"\n Desea correr el programa de nuevo 1=si 2=no: ";
			}
		}while((seguir<1)||(seguir>2));
	}while(seguir==1);
	return 0;
}


void leerA(Alumno x[], int c){
	for(int i{0}; i<c; i++){
		cout<<"\n Datos Alumno "<<i+1<<": "<<endl;
		cout<<"Favor ingresar nombre: ";
		getline(cin, x[i].nombre);
		notasA(x[i].notas,E);
		calcularP(x[i].notas,E);
	}
}

void notasA(double x[], int a){
	for(int j{0}; j<a; j++){							
		x[j]	=	LI + rand()%(LS-LI);			
	}		
}

void calcularP(double x[], int a){
	int temp{0};
	for(int j{0}; j<a; j++){								
		temp	+=	x[j];
	}
	x[4]	=	temp/a;
}

			
void mostrarA(Alumno x[], int c){
	for(int i{0}; i<c; i++){
		cout<<"\nNombre: "<<x[i].nombre<<endl;
		cout<<"Nota 1: "<<x[i].notas[0]<<endl;
		cout<<"Nota 2: "<<x[i].notas[1]<<endl;
		cout<<"Nota 3: "<<x[i].notas[2]<<endl;
		cout<<"Nota 4: "<<x[i].notas[3]<<endl;
		cout<<"Promedio: "<<x[i].notas[4]<<endl;
		cout<<endl;		
	}
	cout<<endl;
	
}

void ordenarA(Alumno x[], int c){
	Alumno temp{};
	for(int i{0}; i<c; i++){
		for(int j{0}; j<c-1; j++){
			if(x[j].notas[4] > x[j+1].notas[4]){
				//temp	=	x[j];
				temp.nombre		=	x[j].nombre;
				temp.notas[0]	=	x[j].notas[0];
				temp.notas[1]	=	x[j].notas[1];
				temp.notas[2]	=	x[j].notas[2];
				temp.notas[3]	=	x[j].notas[3];
				temp.notas[4]	=	x[j].notas[4];
				
				//x[j]	=	x[j+1];
				x[j].nombre		= 	x[j+1].nombre;
				x[j].notas[0]	=	x[j+1].notas[0];
				x[j].notas[1]	=	x[j+1].notas[1];
				x[j].notas[2]	=	x[j+1].notas[2];
				x[j].notas[3]	=	x[j+1].notas[3];
				x[j].notas[4]	=	x[j+1].notas[4];
				
				//x[j+1]	=	temp;
				x[j+1].nombre	=	temp.nombre;
				x[j+1].notas[0]	=	temp.notas[0];
				x[j+1].notas[1]	=	temp.notas[1];
				x[j+1].notas[2]	=	temp.notas[2];
				x[j+1].notas[3]	=	temp.notas[3];
				x[j+1].notas[4]	=	temp.notas[4];
			}
		}		
	}	
}
