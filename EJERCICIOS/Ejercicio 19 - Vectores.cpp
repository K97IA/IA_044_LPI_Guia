		
#include<iostream>
#include<iomanip>			//setw

using namespace std;

const int MAX{10};						//Tamaño de arreglo
void inicializar(int[], int, int);	
void mostrarVector(int[], int);
void leerVector(int[], int);

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int v[MAX]{},w[100]{},cant{31};				//Vector de números enteros que se llama v y además posee MAX espacios
	
	//Inicializar(v,cant, MAX);
	leerVector(v,5);
	cant	=	20;
	inicializar(w,cant, 15);
	mostrarVector(v,MAX);
	mostrarVector(w,10);
	
	
	cout<<"MOstrando el elemento 5 de cada vector: "<<endl;
	cout<<"V[5]"<<v[4]<<endl;
	cout<<"W[5]"<<w[4]<<endl;
	
	return 0;
}

void inicializar(int x[], int y, int tam){
	for(int i{0}; i<tam; i++){
		x[i]	=	y;
	}
}

void mostrarVector(int x[], int y){
	cout<<endl;
	cout<<setw(10)<<"  Elemento"<<setw(10)<<"Valor"<<endl;
	for(int i=0; i<y; i++){
		cout<<"  "<<left<<setw(2)<<"v["<<setw(2)<<i+1<<setw(4)<<"]:"<<setw(10)<<right<<x[i]<<endl;
	}
}

void leerVector(int x[], int y){
	cout<<endl;
	for(int i{0};i<y;i++){
		cout<<"Favor ingresar el elemento ["<<i+1<<"]: ";
		cin>>x[i];
	}	
}
