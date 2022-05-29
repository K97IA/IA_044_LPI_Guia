
//Importar librerías
#include<iostream>		//usar cin, cout, setlocale

//Programa
int main(){
	setlocale(LC_CTYPE, "Spanish");
	//Declaración de variables
	char	nombre[80];		//Almacenar nombre
	int		edad, seguir;	//Edad y seguir
	std::cout<<"Bienvenid@ \n \n";
	do{
		std::cout<<"\nPara comenzar ingrese un nombre: ";
		std::cin>>nombre;										
		std::cout<<"\n\n Bien "<< nombre<< ", favor ingrese su edad: ";		
		do{
			std::cin>>edad;
			if(edad<1){ 
				std::cout<<"Favor ingresar edad real: ";
			}
		}while(edad<1);		
		std::cout<<"\n Entonces eres tú eres "<<nombre<<" con "<<edad<<"  años de vida. Mucho gusto.";		
		std::cout<<"\n\n ¿Desea seguir? (1 = Si, 2 = No): ";
		do{
			std::cin>>seguir;				
			if((seguir<1)||(seguir>2)){
				std::cout<<"No reconocido;\n ¿Desea seguir? (1 = Si, 2 = No:) ";
			}			
		}while((seguir<1)||(seguir>2));
	}while(seguir == 1);	
	return 0;
}   
