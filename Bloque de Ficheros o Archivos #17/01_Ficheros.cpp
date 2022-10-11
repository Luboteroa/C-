/* Archivos o Ficheros en C++
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void Escribir();

int main()
{
	Escribir();
	
	getch();
	return 0;
}

void Escribir()
{
	ofstream archivo;
	string nombreArchivo, frase;
	
	cout<<"Digite el nombre del archivo: "; getline(cin, nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(), ios::out); //Estamos abriendo el archivo
	
	if(archivo.fail()) //Ha abido un error al intentar abrir o crear el archivo
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Digite el texto del archivo: "; getline(cin, frase);
	
	archivo<<frase;
	archivo.close(); //Cerrar el archivo
}
