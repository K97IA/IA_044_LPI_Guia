/*     Muestra números del 1 al 10y luego ese número + 3   */

#include<iostream>

using namespace std; 

//Declarar variables entrada proceso salida
int main(){
	setlocale(LC_CTYPE,"Spanish");		//Usar caracteres latinos
	cout<<"Números del 1 al 10: "<<endl;
	cout<<"Número  Número + 3 \n";
	for(int i=0;i<=10;i++){
		cout<<"  ";
		cout<<i+1;	//i++
		if(i>=9){
			cout<<"     -> ";
		}
		else{
			cout<<"      -> ";	
		}
		cout<<i+4<<endl;		
	}
	return 0;
}
