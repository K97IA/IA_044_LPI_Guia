/*	====================================================================================================================
	== M�s del 90% de �ste c�digo pertenece al libro                                                                  ==
	== https://openlibra.com/es/book/download/fundamentos-de-programacion-con-el-lenguaje-de-programacion-c-ed-2017   ==
	== El resto lo he editado yo para intentar hacerlo m�s did�ctico, incluyendo el comentar cada una de las l�neas   ==
	== de c�digo.                                                                                                     ==
	====================================================================================================================
	==          Marvin Josu� Aguilar Romero ->  marvin.aguilar@unah.edu.hn                                            ==
	==			Obed Humberto Mart�nez Reyes -> obed.martinez@unah.edu.hn											  ==
	==			24 de Febrero de 2020 | Para el tema "Apuntadores"     
	==          Implementando una pila con listas enlazadas                                                           ==
	====================================================================================================================
	
	Este programa es una implementaci�n de una estructura de tipo pila, �Podr�a usted hacer los cambios para que se 
	convierta en una implementaci�n de tipo cola? . . . SABEMOS QUE S�!!!                                                */

#include<iostream>		//Perm�te usar cin,cout,setlocale
#include<cstddef>		//Perm�te apuntar a NULL

using namespace std;	//Usando ventana command

struct Nodo; 			// Declaraci�n adelantada del tipo incompleto Nodo
typedef Nodo* PNodo; 	// Definici�n de tipo Puntero a tipo incompleto Nodo

struct Nodo { 			// Definici�n del tipo Nodo
	PNodo	sig;	 	// Enlace a la siguiente estructura din�mica
	string	dato;		// Dato almacenado en la lista
	int		nodo;	 	//Es innecesario pero lo uso para que ustedes vean el n�mero del nodo
};

void	escribir(PNodo);				//Prototipo procedimiento escribir
PNodo	buscar(PNodo, const string&);	//Prototipo funci�n buscar
PNodo	leer_inversa();					//Prototipo funci�n leer_inversa
void	destruir(PNodo&);				//Prototipo procedimiento destruir
 

int main(){
	setlocale(LC_CTYPE,"Spanish");		//Usar caracteres en castellano
	PNodo 	lista ;						//Creo una variable de tipo PNodo, PNodo es un NODO que apunta  PNodo
	string	nombre;						//nombre a buscar
	lista = leer_inversa();				//A lista le creo una lista enlazada del tipo pila agregando nodos hasta leer fin
	escribir(lista) ;					//Vac�o la pila
	cout<<"\n Ahora probemos buscar\n";	//R�tulo
	cout<<"Ingrese un nombre: ";		
	cin>>nombre;		
	PNodo ptr = buscar(lista, nombre);	//Creo una variable ptr que recibe el resultado de la funcion buscar 
	if (ptr != NULL){					//Si Ptr no apunta a NULL, es decir encontr� un juan, entonces lo imprime
		cout<<"Se encontr� el nombre vea: ";
		cout<<ptr->dato << endl;
		cout<<"Estaba en el nodo: "<<ptr->nodo;		
	}
	destruir(lista);					//Se libera la memoria destruyendo la lista enlazada antes de salir
	return 0; 							//Valor de retorno para la funci�n main
}

void escribir(PNodo lista)
{
	PNodo ptr = lista;					//Creamos apuntador PNodo que apunta a la primera posici�n de la lista
	while (ptr != NULL){				//Mientras Ptr sea diferente a NULL, esto es mientras la pila no este vac�a
		cout<<"Nodo ["<<ptr->nodo;		//Imprimirmos el n�mero de NODO
		cout<<"]: "<<ptr->dato<<endl;	//IMprimimos el dato
		ptr = ptr->sig ;				//Ptr ahora es el siguiente nodo
	}
}

PNodo buscar(PNodo lista, const string& dt){
	PNodo ptr = lista ;								//puntero a Pnodo, recibiendo la primera posici�n de la lista.
	while ((ptr != NULL)&&(ptr->dato != dt)) {		//REcorre el dato mientras no se llegue al final (NULL) o al nombre buscado
		ptr = ptr->sig ;
	}
	return ptr ;
}

PNodo leer_inversa(){
	PNodo lista = NULL;								//En un inicio lista apunta a NULL
	string dt;										//variable para leer
	int	orden	=	0;								//�ndice de la pila
	cout<<endl;
	do{
		orden++;									//Comenzamos con el nodo, orden++
		cout<<"Ingrese un nombre (sin espacios)";
		cout<<" o 'fin' para dejar de leer): ";
		cin>>dt;
		PNodo ptr	=	new Nodo;					//Creo un NOdo 
		ptr->dato	=	dt;							//Comienzo a llenar lo campos del nodo
		ptr->sig	=	lista;						//PTR apunta a la lista, la lista apuntaba a NULL, PTR apunta a NULL la primera vez
		ptr->nodo	=	orden;
		lista		=	ptr;						//LISTA DEJA DE APUNTAR A NULL Y APUNTA A PTR		
	}while((dt != "fin") || (dt	!="Fin") || (dt	!="FIN") || (dt	!="FIn") || (dt	!="fIn") || (dt	!="fiN"));	
	return lista ;
}//cada vez que se agrega un nuevo nodo el nodo que ya estaba se corre y se agrega un nodo al inicio

void destruir(PNodo& lista){
	while (lista != NULL){
		PNodo ptr	=	lista ;
		lista 		=	lista->sig ;		//me muevo al nodo
		delete ptr ;						//lo destruyo hasta llegar al que apunta a NULL
	}
}

