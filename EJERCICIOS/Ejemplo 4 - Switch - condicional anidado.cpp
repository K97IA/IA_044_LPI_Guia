
#include<iostream>

using namespace std;		//Usar i/o standard

int main(){					//Funci�n principal
	int op;
	op	=	0;
	cout<<"Buenvenido a pumitas y m�s"<<endl;
	cout<<"Nuestras opciones para hoy: \n";
	cout<<"   1. Desayuno Catracho"<<endl;
	cout<<"   2. Caf� con Pan"<<endl;
	cout<<"   3. Oatmeal \n   4. Panqueques"<<endl;
	cout<<"Favor ingrese una opci�n: ";
	cin>>op;
	//Usando switch (casos)
	cout<<"Salida usando switch: "<<endl;
	switch(op){
		case 1:										//CASE seguido de la opci�n con la que comparamos la variable del switch, en este caso OP
			cout<<"Ud eligi� opci�n 1"<<endl;
			break;									//Indica que se ha finalizado la opci�n seleccionada y debe salirse del switch.
		case 2:
			cout<<"Ud eligi� opci�n 2"<<endl;
			break;
		case 3:
			cout<<"Ud eligi� opci�n 3"<<endl;
			break;
		case 4:
			cout<<"Ud eligi� opci�n 4"<<endl;
			break;
		default:
			cout<<"Ud eligi� ehhhhhh..."<<op<<endl;
			break;
	}
	//Usando condicionales anidados
	cout<<"Usando condicionales anidados: "<<endl;
	if(op==1){
		cout<<"Ud eligi� opci�n Desayuno Catracho"<<endl;
	}
	else{
		if(op==2){
		cout<<"Ud eligi� Caf� con pan, quiere leche?"<<endl;
		}
		else{
			if(op==3){
				cout<<"Ud eligi� oatmeal"<<endl;
			}
			else
			{
				if(op==4){
					cout<<"Ud eligi� panqueques"<<endl;
				}
				else //Recuerde si no es ninguna de la anteriores algo debe pasar, esto es default en el switch
				{
					cout<<"Esa op no esta en el men�";
				}
			}
		}
	}
	return 0;
} 
