
#include<iostream>

using namespace std;

int recursivo(int);				//Prototipo Función recursiva 1 orden
int recursivo2(int);			//Prototipo Función recursiva orden inverso
int contarpares(int);			//Prototipo Función recursiva contar números pares de 0 hasta el número mandado como parámetro

int main(){
	setlocale(LC_CTYPE, "Spanish");		//Caracteres castellano
	int num{10}, pares{0};				//{} sirve para inicializar
	cout<<"\n Mostramos números del 0 al 10 con itearación: "<<endl;
	for(int i{0};i<11;i++){
		cout<<" "<<i;
	}
	cout<<endl;
	cout<<"\nMostrar los números del 0 al 10 con una función recursiva: "<<endl;
	cout<<recursivo(num);
	
	cout<<endl;
	num	=	0;
	cout<<"\nMostrar los números del 0 al 10 con una función recursiva_2: "<<endl;
	cout<<recursivo2(num);
	
	cout<<endl;
	cout<<"\nMostrar los números de 0 a 10, la idea es contar pares: "<<endl;
	for(int i{0}; i<11; i++){
		if(i%2==0){
			pares++;
			cout<<" "<<i;
		}
	}
	cout<<"\nTotal pares: "<<pares;
	
	cout<<endl;
	cout<<"\nContar los pares con una función recursiva: "<<endl;
	num		=	10;
	pares	=	0;
	cout<<"\nValor incial de pares: "<<pares;
	pares	=contarpares(num);
	
	cout<<"\nTotal pares: "<<pares;
	return 0;
}

int recursivo(int x){
	if(x == 0){
		return 0;
	}
	else{
		cout<<" "<<recursivo(x-1);
		return x;
	}
}

int recursivo2(int x){
	if(x == 10){
		return 10;
	}
	else{
		cout<<" "<<recursivo2(x+1);
		return x;
	}
}

int contarpares(int x){
	if(x==0){
		return 1;
	}
	else
	{
		if(x%2 == 0){ 
			return 1 + contarpares(x-2);
		}
		else{
			return 0 + contarpares(x-1);
		}
	}
}
