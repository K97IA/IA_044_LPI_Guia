/* Vamos a realizar las operaciones aritméticas sobre dos números */

#include<iostream>

using namespace std;

float su(float, float);
float re(float, float);
float mu(float, float);
float di(float, float);

int main(){
	setlocale(LC_CTYPE,"Spanish");
	float n1, n2, suma, resta, mult, div;
	int op;
	n1 = n2	= suma = resta = mult = div =	0.00;
	cout<<"Bienvenid@ a operaciones aritméticas"<<endl;
	do{
		cout<<"Ingrese un número: ";
		cin>>n1;
		cout<<"Ingrese otro número: ";
		cin>>n2;
		suma	=	su(n1, n2);
		resta	=	re(n1, n2);
		mult	=	mu(n1, n2);
		if(n2==0){
			div = 0;
		}else{
			div	=	di(n1,n2);
		}
		cout<<"\n Resultados: ";
		cout<<"\n Suma de "<<n1<<" con "<<n2<<": "<<suma;
		cout<<"\n Diferencia de "<<n1<<" con "<<n2<<": "<<resta;
		cout<<"\n Producto de "<<n1<<" con "<<n2<<": "<<mult;
		cout<<"\n Cociente de "<<n1<<" con "<<n2<<": ";
		if(n2==0){
			cout<<"No definida";
		}else{
			cout<<div;
		}
		cout<<endl;
		cout<<"Desea seguir (1 = Si, 2 = No): ";
		do{
			cin>>op;
			if((op<1)||(op>2)){
				cout<<"Opción no válida, favor ingrese 1 ó 2: ";
			}
		}while((op<1)||(op>2));
	}while(op==1);
	return 0;
}

float su(float x, float y){	return x + y; }

float re(float x, float y){	return x - y; }

float mu(float x, float y){	return x * y; }

float di(float x, float y){	return x / y; }
