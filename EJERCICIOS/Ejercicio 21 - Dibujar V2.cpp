/* Imprimir tri�ngulos, pir�mide y rombo CON FUNCIONES
	Marvin Josu� Aguilar Romero
	la idea es ejemplificar conceptos en clase, el switch, uso de funciones, ciclos for y do while
	4/3/2020 */
	
#include<iostream>						//Usar cin, cout, system pause, system clear, setlocale

using namespace std;					//Usar ventana de comandos

void menu(int );						//prototipo procedimiento menu
void imprimirLinea(int, char);			//Prototipo procedimiento imprimir una l�nea con un caracter 
void imprimirTrianguloIzq(int, char);	//Procedimiento tri�ngulo alineado a la izquierda
void imprimirTrianguloDer(int, char);	//Procedimiento tri�ngulo alineado a la Derecha
void imprimirTrianguloIIzq(int, char);	//Procedimiento tri�ngulo Invertido alineado a la izquierda
void imprimirTrianguloIDer(int, char);	//Procedimiento tri�ngulo Invertido alineado a la derecha
void imprimirPiramide(int, char);		//Procedimiento pir�mide
void imprimirRombo(int, char);			//Procedimiento Rombo

const char espacio = ' ';				//Variable GLOBAL, constante

int main(){
	setlocale(LC_CTYPE, "Spanish");		//Permitir caracteres latinos
	int 	opcion, seguir, cant;		
	char	caracter;
	
	do{
		system("CLEAR");										//Limpiar pantalla
		cout<<"Ingrese longitud deseada: ";
		do{														//Validar cantidad de entrada
			cin>>cant;
			if(cant<1){
				cout<<"Longitud debe ser mayor que cero: ";
			}
		}while(cant<1);
		cout<<"\n Con qu� caracter voy a dibujar: ";			//leer carcater para dibujar
		cin>>caracter;											
		menu(cant);												//mostrar men�
		cout<<"\n\n �Qu� desea que dibuje?: ";
		do{														//validar entrada de men�
			cin>>opcion;
			if((opcion<1)||(opcion>6)){
				cout<<"Elija entre 1 y 6: ";
			}
		}while((opcion<1)||(opcion>6));
		cout<<"\n\n AHORA MISMO: \n\n";
		//Comenzamos con los dibujos
		switch(opcion){
			case 1:{	imprimirTrianguloIzq(cant, caracter);	break;	}
			case 2:{	imprimirTrianguloDer(cant, caracter);	break;	}
			case 3:{	imprimirTrianguloIIzq(cant, caracter);	break;	}
			case 4:{	imprimirTrianguloIDer(cant, caracter);	break;	}
			case 5:{	imprimirPiramide(cant, caracter);		break;	}
			case 6:{	imprimirRombo(cant, caracter);			break;	}
		};
		cout<<"\n �A qu� soy genial? \nDesea seguir, 1 = Si, 0 = No: ";
		do{
			cin>>seguir;
			if ((seguir<0)||(seguir>1)){
				cout<<"1 = Si   0 = No, ingrese opci�n v�lida: ";
			}
		}while((seguir<0)||(seguir>1));
	}while(seguir == 1);
	return 0;
}

void menu(int cant){														
	cout<<"\n\n Puedo dibujar ";
		cout<<"\n 1. Tri�ngulo invertido alineado a la izquierda.";
		cout<<"\n 2. Tri�ngulo invertido alineado a la derecha.";
		cout<<"\n 3. Tri�ngulo alineado a la izquierda.";
		cout<<"\n 4. Tri�ngulo alineado a la derecha.";
		cout<<"\n 5. Pir�mide ("<<cant<<" ser�a la altura).";
		cout<<"\n 6. Rombo ("<<cant*2<<" ser�a la alura).";
}

void imprimirLinea(int x, char c){
	for(int i=0; i<x; i++)
		cout<<" "<<c<<" ";	
}

void imprimirTrianguloIzq(int cant, char caracter){		//Procedimiento tri�ngulo alineado a la izquierda
	for(int i=0; i<cant; i++){
		imprimirLinea(cant-i, caracter);  				//for(int j=0; j<cant-i; j++){cout<<" * ";}
		cout<<endl;
	}
}

void imprimirTrianguloDer(int cant, char caracter){		//Procedimiento tri�ngulo alineado a la Derecha
	for(int i=0; i<cant; i++){					
		imprimirLinea(i, espacio); 
		imprimirLinea(cant-i, caracter);
		cout<<endl;
	}
}

void imprimirTrianguloIIzq(int cant, char caracter){	//Procedimiento tri�ngulo Invertido alineado a la izquierda
	for(int i=0; i<cant; i++){
		imprimirLinea(i, caracter);
		cout<<endl;
	}
}

void imprimirTrianguloIDer(int cant, char caracter){	//Procedimiento tri�ngulo Invertido alineado a la derecha
	for(int i=0; i<cant; i++){
		imprimirLinea(cant-i, espacio);	
		imprimirLinea(i, caracter);
		cout<<endl;
	}
}

void imprimirPiramide(int cant, char caracter){		//Procedimiento pir�mide
	for(int i=0; i<cant; i++){
		imprimirLinea(cant-i, espacio);
		imprimirLinea(2*i+1, caracter);
		cout<<endl;
	}
}

void imprimirRombo(int cant, char caracter){			//Procedimiento Rombo
	for(int i=0; i<cant; i++){							//Parte superior
		imprimirLinea(cant-i, espacio);
		imprimirLinea(2*i+1, caracter);
		cout<<endl;					
	}
	for(int i=cant; i>=0; i--){							//Parte inferior
		imprimirLinea(cant-i, espacio);
		imprimirLinea(2*i+1, caracter);					
		cout<<endl;
	}			
}
