/* Lectura de ficheros 
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void Lectura();

int main()
{
	Lectura();
	
	getch();
	return 0;
}

void Lectura()
{
	ifstream archivo;
	string texto;
	
	archivo.open("luis", ios::in);
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo de texto";
		exit(1);
	}
	
	while(!archivo.eof()) //Mientras no sea el final del archivo
	{
		getline(archivo, texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}
