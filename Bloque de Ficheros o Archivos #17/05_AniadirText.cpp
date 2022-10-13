/* Añadir texto al final de un archivo
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void AddText();

int main()
{
	AddText();
	
	getch();
	return 0;
}

void AddText()
{
	ofstream archivo;
	string texto;
	
	archivo.open("programacion.txt", ios::app); //Abrimos el archivo en modo añadir 
	  
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		return;
	}
	cout<<"Digite el texto que desea implementar: "; getline(cin, texto);
	
	archivo<<texto<<endl;
	
	archivo.close();
}
