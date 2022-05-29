/* Imprimir triángulos, pirámide y rombo SIN FUNCIONES
	Marvin Josué Aguilar Romero
	4/3/2020 */
	
#include<iostream>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int opcion, seguir, cant;
	do{
		system("CLEAR");
		cout<<"Ingrese longitud deseada: ";
		do{
			cin>>cant;
			if(cant<1){
				cout<<"Longitud debe ser mayor que cero: ";
			}
		}while(cant<1);
		cout<<"\n\n Puedo dibujar ";
		cout<<"\n 1. Triángulo invertido alineado a la izquierda.";
		cout<<"\n 2. Triángulo invertido alineado a la derecha.";
		cout<<"\n 3. Triángulo alineado a la izquierda.";
		cout<<"\n 4. Triángulo alineado a la derecha.";
		cout<<"\n 5. Pirámide ("<<cant<<" sería la altura).";
		cout<<"\n 6. Rombo ("<<cant*2<<" sería la alura).";
		cout<<"\n\n ¿Qué desea que dibuje?: ";
		do{
			cin>>opcion;
			if((opcion<1)||(opcion>6)){
				cout<<"Elija entre 1 y 6: ";
			}
		}while((opcion<1)||(opcion>6));
		cout<<"\n\n AHORA MISMO: \n\n";
		//Comenzamos con los dibujos
		switch(opcion){
			case 1:{
				for(int i=0; i<cant; i++){
					for(int j=0; j<cant-i; j++){
						cout<<" * ";
					}
					cout<<endl;
				}
				break;
			}
			case 2:{
				for(int i=0; i<cant; i++){
					for(int m=0; m<i; m++)
						cout<<"   ";
					for(int j=0; j<cant-i; j++){
						cout<<" * ";
					}
					cout<<endl;
				}
				break;
			}
			case 3:{
				for(int i=0; i<cant; i++){
					for(int j=0; j<i; j++){
						cout<<" * ";
					}
					cout<<endl;
				}
				break;
			}
			case 4:{
				for(int i=0; i<cant; i++){
					for(int m=0; m<cant-i; m++)
						cout<<"   ";
					for(int j=0; j<i; j++){
						cout<<" * ";
					}
					cout<<endl;
				}
				break;
			}
			case 5:{
				for(int i=0; i<cant; i++){
					for(int m=0; m<cant-i; m++){
						cout<<"   ";
					}
					for(int j=0; j<(2*i+1);j++){
						cout<<" * ";
					}
					cout<<endl;
				}
				break;
			}
			case 6:{
				for(int i=0; i<cant; i++){
					for(int m=0; m<cant-i; m++){
						cout<<"   ";
					}
					for(int j=0; j<(2*i+1);j++){
						cout<<" * ";
					}
					cout<<endl;					
				}
				for(int i=cant; i>=0; i--){
					for(int m=0; m<cant-i; m++){
						cout<<"   ";
					}
					for(int j=0; j<(2*i+1);j++){
						cout<<" * ";
					}					
					cout<<endl;
				}
				break;
			}
		};
		cout<<"\n ¿A qué soy genial?"<<endl;
		cout<<"Desea seguir, 1 = Si, 0 = No: ";
		do{
			cin>>seguir;
			if ((seguir<0)||(seguir>1)){
				cout<<"1 = Si   0 = No, ingrese opción válida: ";
			}
		}while((seguir<0)||(seguir>1));
	}while(seguir == 1);
	return 0;
}
