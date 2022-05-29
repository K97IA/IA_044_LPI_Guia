#include<iostream>
#include"escinco.h"

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int num;
	for(int i=0; i<10; i++){
		cout<<"Ingrese un número entero: ";
		cin>> num;
		if(escinco(num)){ 
			cout<<"\n\nEl número es cinco!!!! \n\n";
		}
	}
	return 0;
}


