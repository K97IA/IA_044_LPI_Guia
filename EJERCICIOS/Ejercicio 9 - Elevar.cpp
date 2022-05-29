/* Elevar un número a un segundo número */

#include<iostream>					

using namespace std;						//Espacio std

int main(){
	setlocale(LC_CTYPE,"Spanish");
	float potencia;
	int	n1, n2, op;
	n1			=	0;
	n2			=	0;
	op			=	0;	
	do{
		potencia	=	1.00;
		cout<<"Bienvenido a potenciando números"<<endl;
		cout<<"Favor ingrese un número: ";
		cin>>n1;
		cout<<"Favor ingrese un número más: ";
		cin>>n2;
		if(n2==0){
			potencia	=	1.00;
		}
		else{
			if(n2>0){
				for(int i = 0; i<n2; i++){
					potencia	*=	n1;					//Elevar al 2  n1 * n1, elevar al 3 n1* n1 *n1
				}
			}
			else{
				n2	*= -1;
				for(int i = 0; i<n2; i++){
					potencia	*=	n1;					
				}
				potencia	=	1/potencia;			
			}
		}
		cout<<"\nBien, "<<n1<<" elevado a la "<<n2<<" es: "<<potencia;
		
		cout<<"\n\nDesea seguir (1 = si, 2 = no): ";
		do{
			cin>>op;
			if((op<1)||(op>2)){
				cout<<"Opción no válida, favor ingrese (1 ó 2): ";
			}
		}while((op<1)||(op>2));
	}while(op==1);
	return 0;
}
