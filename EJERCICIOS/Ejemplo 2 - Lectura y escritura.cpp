
   #include<iostream>			//i/o std
      
   using namespace std;
   
   int main(){
   	char	nombre[40];
   	cout<<"Hola!, Por favor escribe t� nombre: "; //Pedir nombre 
	//cin.getline(nombre,40);						//cin.getline(<variable>,<tama�o>) permite leer cadenas de caracteres con espacios en blanco 
	cin>>nombre;									//cin no lee nada despu�s de un espacio en blanco
	cout<<"Mucho gusto "<<nombre<<" ;)";
	return 0;
   }
   
