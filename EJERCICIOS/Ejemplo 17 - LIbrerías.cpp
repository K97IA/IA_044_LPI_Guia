#include<iostream>
#include"escinco.h"

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int num;
	for(int i=0; i<10; i++){
		cout<<"Ingrese un n�mero entero: ";
		cin>> num;
		if(escinco(num)){ 
			cout<<"\n\nEl n�mero es cinco!!!! \n\n";
		}
	}
	return 0;
}


