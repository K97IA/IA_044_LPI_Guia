
#include<iostream>

using namespace std;

namespace ast{
	void linea(int x){
		for(int i = 0; i<x; i++){
			cout<<"* ";
		}
	}
} 

void linea(int);

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int n;
	cout<<"Vamos a imprimir asterisos y almohadillas (hey es solo un ejemplo)"<<endl;
	cout<<"\n Favor ingrese un número mayor que cero: ";
	do{
		cin>>n;
		if(n<1){
			cout<<"MAYOR QUE CERO: ";
		}
	}while(n<1);
	cout<<"\n Asteriscos:   ";
	ast::linea(n);
	cout<<"\n Almohadillas: ";
	linea(n);
	return 0;
}

void linea (int x){
	for(int i = 0; i<x; i++){
			cout<<"# ";
		}
}
