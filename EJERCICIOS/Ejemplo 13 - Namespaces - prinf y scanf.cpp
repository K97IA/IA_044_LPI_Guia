
//Importar librer�as
#include<stdio.h>				//Usar printf y scanf en lugar de cin  y cout porque cin y cout son mas nuevos
								//printf y scanf son funciones, reciben par�metros.

//Programa
int main(){
	//Declaraci�n de variables
	char	nombre[80];		//Almacenar nombre
	int		edad, seguir;	//Edad y seguir
	printf("Bienvenid@ \n \n");
	do{
		printf("\nPara comenzar ingrese un nombre: ");
		scanf("%79s", nombre);										//%<tama�o del arreglo> s por caracter
		printf("\n\n Bien %s, favor ingrese su edad: ", nombre);		//%s ser� sutitu�do por una variable tipo char
		do{
			scanf("%d", &edad);										//%d recibir� un entero, &paso por referencia
			if(edad<1){ 
				printf("Favor ingresar edad real: ");
			}
		}while(edad<1);		
		printf("\n Entonces eres t%c eres %s con %d a%cos de vida. Mucho gusto.",163, nombre, edad,164);		
		printf("\n\n%cDesea seguir? (1 = Si, 2 = No): ", 168);
		do{
			scanf("%d", &seguir);				//Recordemos el uso de & nos da la direcci�n de la variable y accedemos directamente a ella, es un paso por par�metro
			if((seguir<1)||(seguir>2)){
				printf("No reconocido;\n %cDesea seguir? (1 = Si, 2 = No:) ", 168);
			}			
		}while((seguir<1)||(seguir>2));
	}while(seguir == 1);	
	return 0;
}   
