/* Triángulo invertido */

#include<iostream>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int lado	=	0;
	cout<<"Bienvenido a volteano triángulos."<<endl;
	cout<<"Para comenzar favor ingresar un valor para la base: ";
	cin>>lado;
	for(int i = 0; i<lado; i++){			//Cuenta renglones
		if(i<10){
			cout<<" Valor de i: "<<i<<"    | ";
		}
		else
		{
			cout<<" Valor de i: "<<i<<"   | ";
		}
		if(lado-i>=10){
			cout<<lado-i<<"  ";
		}
		else
		{
			cout<<lado-i<<"   ";
		}
		for(int j = 0; j< lado-i;j++){		// Imprime asteriscos por renglón
		
			cout<<"* ";
		}
		cout<<endl;		
	}
	return 0;
}
