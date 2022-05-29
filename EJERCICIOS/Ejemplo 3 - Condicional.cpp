   
#include<iostream>			//i/o std

using namespace std;

int main(){
	//Declarar variables
	int soniia, residuo;
	cout<<"Por favor ingrese un número entero: ";
	cin>>soniia;
	residuo	=	soniia % 2;
	//Comparando la variable con cero
	if(residuo == 0)
	{
		cout<<soniia<<" Es par";
	}
	else
	{
		cout<<soniia<<" No es par";	
	}
	
	//Comparando el valor de verdad de la variable, recuerde 0 = false, cualquier otra cosa es true
	if(residuo)
	{
		cout<<soniia<<" No es par";
	}
	else
	{
		cout<<soniia<<" es par";	
	}
	
	//No usando una variable temporal (residuo) para almacenar el resiltado del módulo
	if(soniia % 2 == 0)
	{
		cout<<soniia<<" Es par";
	}
	else
	{
		cout<<soniia<<" No es par";	
	}
	return 0;
}
