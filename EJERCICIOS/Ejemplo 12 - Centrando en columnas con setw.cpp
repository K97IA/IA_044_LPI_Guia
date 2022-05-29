

#include <iostream>						//cin, cout, setlocale
#include <string>						//Me permite usar cadenas, las cadenas son objetos y poseen funciones propias de si como length()
#include <iomanip>						//Uso del setw

using namespace std;					//Usaremos std así no tendremos que estar std::cout<< o std::cin etc...

int main() 								//Programa principal
{
	setlocale(LC_CTYPE,"Spanish");		//Uso de caracteres latinos
    string str[10];						//Arreglo de 10 cadenas
    int ancho = 20;						//Definimos una longitud de 40 (considerando columnas de )
	int len, resto;						//Cuanto mide el nombre y cuanto me resta de espacio libre en mi columna de la mitad de console_width
	for(int i = 0; i<5; i++){			//Leemos los nombres
		cout<<"Ingrese un nombre: ";
		cin>>str[i];
	}	
	//Ahora a imprimir
	cout<<setw(10)<<"Número"<<setw(ancho)<<"Nombre"<<setw(20)<<"Cuadrado"<<endl;		//Una columna de 10, una de 20 y una de 20
	for(int i = 0; i<5; i++){														//Imprimir los nombres
		cout<<setw(10)<<right<<i;													//En la primera columna alineado a la derecha el valor de i
		len = str[i].length();														//Length me da la longitud del nombre, es una función del objeto.		
    	if(len%2==0) str[i] += " ";													//Si la longitud es par agregamos un espacio en blanco, para centrar es mejor con impares
    	cout<<setw((ancho)+len/2)<<right<<str[i];									//La columna será la mitad de 40 (arriba ya dije que nombre era 20) más la mitad de la cadena
    																				//alineo a la derecha y lo imprimo, así consigo desplazar la columna de la derecha y parece que 
    																				//estoy centrando
    	resto	=	((ancho*2) - ((ancho)+len/2));									//Ahora completo la derecha con los espacios en blanco que deje a la izquierda del nombre
    																				//averigue por qué duplico primero la columna
       	cout<<setw(resto)<<" ";				
    	cout<<setw(10)<<left<<i*i<<endl;											//Imrpimo en una columna de 10 otro valor solo para demostrar que los espacios se completaron										
	}
    return 0;
}

