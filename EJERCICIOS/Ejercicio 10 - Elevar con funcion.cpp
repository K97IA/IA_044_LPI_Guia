/* Elevar un n�mero a un segundo n�mero */

#include<iostream>	
#include<math.h>				

using namespace std;						//Sspacio std

int main(){
	setlocale(LC_CTYPE,"Spanish");
	float potencia;
	int	n1, n2, op;
	n1			=	0;
	n2			=	0;
	op			=	0;	
	do{
		potencia	=	1.00;
		cout<<"Bienvenido a potenciando n�meros"<<endl;
		cout<<"Favor ingrese un n�mero: ";
		cin>>n1;
		cout<<"Favor ingrese un n�mero m�s: ";
		cin>>n2;
		potencia	=	pow(n1,n2);
		cout<<"\nBien, "<<n1<<" elevado a la "<<n2<<" es: "<<potencia;
		
		cout<<"\n\nDesea seguir (1 = si, 2 = no): ";
		do{
			cin>>op;
			if((op<1)||(op>2)){
				cout<<"Opci�n no v�lida, favor ingrese (1 � 2): ";
			}
		}while((op<1)||(op>2));
	}while(op==1);
	return 0;
}
