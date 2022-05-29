/*  Programa ejercicio 7.20 libro "Cómo programar en C++ sexta edición Deitel & Deitel
	Autor: Marvin Josué Aguilar Romero
	Fecha: 27/3/2020 #QuedateEnCasa
	correo:	marvin.aguilar@unah.edu.hn */
    
#include<iostream>						//cin, cout, setlocale
#include<iomanip>						//left, rigth, setw, clear/cls, pause
#include<windows.h>						//Handle para el color


using namespace std;					//Ventana de comandos


void 	bienvenida();					//Prototipo Procedimiento para dar la bienvenida
void 	final();						//Prototipo Procedimiento para despedirse ESTA POR HACER
void 	inicializarAvion(int []);		//Prototipo Procedimiento para inicializar ARRAY
void 	mostrarAvion(int []);			//Prototipo Procedimiento para mostrar asientos libres u ocupados
bool	dispPC(int []);					//Prototipo función opcional es para vebderBOleto2 comprueba si hay asientos vacíos en PC
bool  	dispCE(int []);					//Prototipo función opcional es para vebderBOleto2 comprueba si hay asientos vacíos en CE
void	venderBoleto(int [], int);		//Prototipo procedimiento venta de boletos, requiere variables globales.
void	venderBoleto2(int [], int);		//Prototipo venta de bolestos contando asientos vacíos OPcional, funciona con disPC
void	imprimirBoleto(int, int);		//Prototipo procedimiento muestra noleto vendido
void 	color(int);						//Prototipo procedimiento manipular color en cmd

//variables globales
int  dpc = 5;							//Asientos primera clase [0-4] en el vector					
int  dce = 10;							//Asientos clase económica [5-9] en el vector	
int vendidos = 0;						//Centinela para saber si hay asientos disponibles

//función principal
int main(){
	setlocale(LC_CTYPE,"Spanish");		//Uso caracteres latinos
	int		avion[10], op;				//Avión con diez asientos, op a leer de compra
	inicializarAvion(avion);			//POner los asientos en 0
	bienvenida();						//Mostrar bienvenida
	do{									//Ciclo de venta, mientras haya asientos vacíos en cualquier clase
		system("cls");				//Limpiar la pantalla
		mostrarAvion(avion);			//Muestra asientos
		cout<<endl<<endl;	
		cout<<setw(30)<<" "<<"Opciones de compra: \n";
		cout<<setw(30)<<" "<<"1. Primera clase."<<endl;
		cout<<setw(30)<<" "<<"2. Clase económica."<<endl;
		cout<<setw(28)<<" "<<">> ¿Dónde desea su asiento?: ";
		do{								//valida opciones de compra
			cin>>op;
			if((op<1)||(op>2)){
				cout<<"\n Elegir entre 1 ó 2: ";
			}
			switch(op){
				case 1:
					venderBoleto(avion, 1);				//puede usarse venderBoleto2(avion,1) está incompleto
					break;
				case 2:
					venderBoleto(avion, 2);
					break;
				default: break;
			}
		}while((op<1)||(op>2));			
	}while(vendidos < 10);	//Mientras haya asientos que se repita
	system("cls");
	mostrarAvion(avion);
	final();	//Deberia llamarse procedimiento final que no esta hecho
	return 0;
}


void bienvenida(){
	system("cls");
	cout<<"\n\n";
	cout<<right<<setw(40)<<" "<<endl;
	color(14);
	cout<<left<<setw(20)<<" "<<"        __|__"<<endl;
	cout<<right<<setw(40)<<"--------(_)--------"<<endl;
	cout<<right<<setw(40)<<"  O  O       O  O  "<<endl;
	color(15);
	cout<<"\n\n";	
	cout<<right<<setw(21)<<" ";
	color(23);
	cout<<"B I E N V E N I D @\n\n"<<endl;
	color(15);
	system("pause");
}


void 	inicializarAvion(int a[10]){
	for(int i=0; i<10; i++){
		a[i] = 0;
	}
}

void 	mostrarAvion(int a[10]){
	int p =0;
	cout<<setw(10)<<" "<<setw(25)<<"Primera clase "<<setw(25)<<"Clase Económica"<<endl;
	cout<<setw(10)<<" ";
	for(int i=0; i<10; i++){
		if(i==5){
				cout<<"   ";
		}
		if(i<5){
			color(13);
			p	=	13;
		}
		else
		{
			color(3);
			p	=	3;
		}
		
		if(a[i]==0){
			cout<<"[   ] ";
		}
		else
		{
			cout<<"[ ";
			color(12);
			cout<<"X";
			color(p);
			cout<<" ] ";
		}
		color(15);
	}
	cout<<endl;
	cout<<setw(10)<<" ";
	for(int i=0; i<5; i++){
		cout<<"  "<<i+1<<"   ";
	}
	cout<<"   ";
	for(int i=0; i<5; i++){
		cout<<"  "<<i+1<<"   ";
	}
}

void	venderBoleto2(int a[10], int t){ 	//t es para saber si lo vendo en primera [0-4] o en económica [5-9]
		int tmp;
		//ver si hay asientos disponibles
		if(dispPC(a)){
			for(int i= 0; i<5; i++){
				if(a[i]==0){
					tmp	=	i;
				}
			}
			a[tmp]=1;
			imprimirBoleto(1, tmp+1);
			vendidos++;
		}
		else{
			if(dispCE){
				cout<<"Ofrecer otra clase";
			}
			else
			{
				cout<<"ya está lleno el avión";
			}
			cout<<"SORRY WEY NO HAY"<<endl;		//fa;ta ofrecer otrea clase
			system("pause");
		}
}


//Función que cuenta los asientos libres en las primeras cinco posiciones del arreglo
//retorna true si encuentra al menos un asiento libre
bool	dispPC(int a[10]){			
	int contar	=	0;
	for(int i= 0; i<5; i++){
		if(a[i]==0){
			contar++;
		}
	}
	if(contar!= 0){
		return true;
	}
	else
	{
		return false;
	}	
}


//Función que cuenta los asientos libres en las últimas cinco posiciones del arreglo
//retorna true si encuentra al menos un asiento libre
bool	dispCE(int a[10]){
	int contar	=	0;
	for(int i= 5; i<10; i++){
		if(a[i]==0){
			contar++;
		}
	}
	if(contar!= 0){
		return true;
	}
	else
	{
		return false;
	}	
}


void	venderBoleto(int a[10], int t){	//1 PC, 2 CE
	int cambio, as;
	cambio	=	0;
	if((t==1)&&(dpc>0)){
		//vender primera clase
		a[--dpc]=1;
		as	= dpc + 1;	
		imprimirBoleto(1, as);
		vendidos++;	
	}
	else
	{
		if((t==1)&&(dpc==0)&&(dce>5)){
			cout<<"\n Lo lamentamos pero no hay asientos libres: "<<endl;
			cout<<"¿Desea cambiar a clase económica, 1 Sí, 2 No: ";
			do{
				cin>>cambio;
				if((cambio<1)||(cambio>2)){
					cout<<"\n 1 ó 2: ";
				}
			}while((cambio<1)||(cambio>2));
			if(cambio==1){
				venderBoleto(a,2);
			}
			else
			{
				cout<<"\n Le toca esperar 3 horas!\n Gracias \n";
				system("pause");
			}
		}
		else
		{
			if((t==2)&&(dce>5)){
				//vender clas económica
				a[--dce]=1;	
				vendidos++;	
				as = dce - 4;		//-4 porque dce empieza en 10, 5 posiciones más
				imprimirBoleto(2, as);	
	        }
	        else
	        {
	        	if((t==2)&&(dpc>0)&&(dce<6)){
					cout<<"\n Lo lamentamos pero no hay asientos libres: "<<endl;
					cout<<"¿Desea cambiar a Primera Clase, 1 Sí, 2 No: ";
					do{
						cin>>cambio;
						if((cambio<1)||(cambio>2)){
							cout<<"\n 1 ó 2: ";
						}
					}while((cambio<1)||(cambio>2));
					if(cambio==1){
						venderBoleto(a,1);
					}
					else
					{
						cout<<"\n le toca esperar 3 horas!\n Gracias \n";
						system("pause");
					}
				}	        	
	        	
			}
		}
	}	
}

void imprimirBoleto(int clase, int asiento){
	cout<<"\n\n"<<setw(25)<<" ";
	for(int i=0; i<10; i++){ cout<<" - "; }
	cout<<"\n"<<setw(25)<<" |";
	cout<<"            __|__             |"<<endl;
	cout<<setw(25)<<" |"<<"     --@--@--(_)--@--@--      |"<<endl;
	cout<<setw(25)<<" |"<<setw(31)<<"|"<<endl;
	cout<<setw(25)<<" |"<<"     BOLETO VENDIDO           |"<<endl;
	cout<<setw(25)<<" |"<<"     CLASE";
	if(clase==1){cout<<" PRIMERA            |";}else{cout<<" ECONóMICA          |";}cout<<endl;
	cout<<setw(25)<<" |"<<"      ASIENTO: "<<asiento<<"              |"<<endl;
	cout<<setw(25)<<" |"<<setw(31)<<"|"<<endl;
	cout<<setw(25)<<" ";
	for(int i=0; i<10; i++){ cout<<" - "; }
	cout<<endl<<endl;
	system("Pause");	
}

void color(int x){
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE); 
   	SetConsoleTextAttribute(h,x); 
}

void final(){
	cout<<"\n\n"<<setw(25)<<" ";
	for(int i=0; i<10; i++){ cout<<" - "; }
	cout<<"\n"<<setw(25)<<" |";
	cout<<"            __|__             |"<<endl;
	cout<<setw(25)<<" |"<<"     --@--@--(_)--@--@--      |"<<endl;
	cout<<setw(25)<<" |"<<setw(31)<<"|"<<endl;
	cout<<setw(25)<<" |"<<"     BUEN VIAJE               |"<<endl;
	cout<<setw(25)<<" |"<<setw(31)<<"|"<<endl;
	cout<<setw(25)<<" ";
	for(int i=0; i<10; i++){ cout<<" - "; }
	cout<<endl<<endl;
	cout<<"ASCII de aviones: "<<endl;
	cout<<"DC-6 by Dave Goodman, Generic 4 engine Jet by Paul Tomblin, thanks a lot";
	system("Pause");	
}
