
   #include<iostream>			//i/o std
      
   using namespace std;
   
   int main(){
   	char	nombre[40];
   	cout<<"Hola!, Por favor escribe tú nombre: "; //Pedir nombre 
	//cin.getline(nombre,40);						//cin.getline(<variable>,<tamaño>) permite leer cadenas de caracteres con espacios en blanco 
	cin>>nombre;									//cin no lee nada después de un espacio en blanco
	cout<<"Mucho gusto "<<nombre<<" ;)";
	return 0;
   }
   
