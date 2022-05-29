
#include<iostream>

using namespace std;		//Usar i/o standard

int main(){					//Función principal
	int op;
	op	=	0;
	cout<<"Buenvenido a pumitas y más"<<endl;
	cout<<"Nuestras opciones para hoy: \n";
	cout<<"   1. Desayuno Catracho"<<endl;
	cout<<"   2. Café con Pan"<<endl;
	cout<<"   3. Oatmeal \n   4. Panqueques"<<endl;
	cout<<"Favor ingrese una opción: ";
	cin>>op;
	//Usando switch (casos)
	cout<<"Salida usando switch: "<<endl;
	switch(op){
		case 1:										//CASE seguido de la opción con la que comparamos la variable del switch, en este caso OP
			cout<<"Ud eligió opción 1"<<endl;
			break;									//Indica que se ha finalizado la opción seleccionada y debe salirse del switch.
		case 2:
			cout<<"Ud eligió opción 2"<<endl;
			break;
		case 3:
			cout<<"Ud eligió opción 3"<<endl;
			break;
		case 4:
			cout<<"Ud eligió opción 4"<<endl;
			break;
		default:
			cout<<"Ud eligió ehhhhhh..."<<op<<endl;
			break;
	}
	//Usando condicionales anidados
	cout<<"Usando condicionales anidados: "<<endl;
	if(op==1){
		cout<<"Ud eligió opción Desayuno Catracho"<<endl;
	}
	else{
		if(op==2){
		cout<<"Ud eligió Café con pan, quiere leche?"<<endl;
		}
		else{
			if(op==3){
				cout<<"Ud eligió oatmeal"<<endl;
			}
			else
			{
				if(op==4){
					cout<<"Ud eligió panqueques"<<endl;
				}
				else //Recuerde si no es ninguna de la anteriores algo debe pasar, esto es default en el switch
				{
					cout<<"Esa op no esta en el menú";
				}
			}
		}
	}
	return 0;
} 
