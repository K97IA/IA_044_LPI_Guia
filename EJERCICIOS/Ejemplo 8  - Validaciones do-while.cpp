
#include<iostream>							//Input oputpu stream
#include<conio.h>							//No lo usamos pero su compa�ero lo ten�a, cuando se hable de segmentaci�n volveremos a ello

using namespace std;						//Nombre de espacio a usar

int main(){
	setlocale(LC_CTYPE, "Spanish");			//Aceptar caracteres extendidos propios del espa�ol													
	float n1, n2, suma, resta, mult, div;	//Declaraci�n de variables
	//Inicilalizar variables
	n1		=	0;
	n2		=	0;
	suma	=	0;
	resta	=	0;
	mult	=	0;
	div		=	0;
	//Comenzar con el desarrollo del programa
	cout<<"Vamos a comenzar nuestro progama. \n";
	cout<<"Vamos a realizar operaciones aritm�ticas con dos n�meros positivos. \n";
	cout<<"Vamos a darle"<<endl;			//Humor haciendo referencia al youtuber luisito comunica
	
	cout<<"Ingrese un n�mero positivo: ";
	do{ 									//Validar n1
		cin>>n1;
		if(n1<0){
			cout<<endl; 
			cout<<"El n�mero debe ser positivo"<<endl;
			cout<<"   * Favor ingresar n�mero positivo: ";
		}	
	}while(n1<0);
	
	cout<<"Ingrese otro n�mero positivo: "; 
	do{										//Validar n2
		cin>>n2;
		if(n2<1){
			cout<<endl; 
			cout<<"El n�mero debe ser mayor que cero (recuerde que se realizar� una divisi�n)"<<endl;
			cout<<"   * Favor ingresar n�mero mayor que cero: ";
		}	
	}while(n2<1);
	
	//Operaciones aritm�ticas
	suma 	= n1 + n2;
	resta 	= n1 - n2;
	mult 	= n1 * n2;
	div 	= n1/n2;
	
	//Salidas
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicaci�n es: "<<mult<<endl;
	if(n2==0){
		cout<<"La divisi�n no se puede realizar";
	}
	else
	{
		cout<<"La divisi�n es: "<<div<<endl;
	}	
	return 0;
}

/*	
	|| Tarea:
		> Dar formato a la salida con setw
		> Mejorar la rotulaci�n de bienvenida
		> Hacer mediante ciclos que el programa no solo se ejecute una vez sino las veces que el usuario as� lo desee
*/

