
//Importar librerías
#include<iostream>					 //usar cin, cout, setlocale

using namespace std;				//Indico que tendre acceso a todo el nombre de espacio (sus elementos) 
									//No necesito colocar std:: antes de cada elemento del namespace
//Programa
int main(){
	setlocale(LC_CTYPE, "Spanish");
	//Declaración de variables
	char	nombre[80];		//Almacenar nombre
	int		edad, seguir;	//Edad y seguir
	cout<<"Bienvenid@ \n \n";
	do{
		cout<<"\nPara comenzar ingrese un nombre: ";
		cin>>nombre;										
		cout<<"\n\n Bien "<< nombre<< ", favor ingrese su edad: ";		
		do{
			cin>>edad;
			if(edad<1){ 
				cout<<"Favor ingresar edad real: ";
			}
		}while(edad<1);		
		cout<<"\n Entonces eres tú eres "<<nombre<<" con "<<edad<<"  años de vida. Mucho gusto.";		
		cout<<"\n\n ¿Desea seguir? (1 = Si, 2 = No): ";
		do{
			cin>>seguir;				
			if((seguir<1)||(seguir>2)){
				cout<<"No reconocido;\n ¿Desea seguir? (1 = Si, 2 = No:) ";
			}			
		}while((seguir<1)||(seguir>2));
	}while(seguir == 1);	
	return 0;
}   
