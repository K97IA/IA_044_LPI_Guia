   
#include<iostream>

using namespace std;								//Usar i/o standard

int main(){											//Función principal
	int x,y;										//Declarar dos variables enteras
	x	=	2004;									//Inicilaizar x
	y	=	0;										//Inicilaizar y
	cout<<"X vale: "<<x<<" y Y vale: "<<y<<"\n";
	
	y	=	++x;									//Se hacen dos cosas primero se modifica x y luego se modifica y
	
	cout<<"Veamos el operador de incremento al ejecutar y = ++x: "<<endl;
	cout<<"X vale: "<<x<<" y Y vale: "<<y;
    cout<<"Veamos el operador de decremento al ejecutar y = --x: "<<endl;
	y	=	--x;
	cout<<"X vale: "<<x<<" y Y vale: "<<y;
	return 0;
} 
