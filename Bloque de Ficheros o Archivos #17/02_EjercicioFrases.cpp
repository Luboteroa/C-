/* Ejercicio 1. Realice un programa que pida al usuario el nombre de un fichero de texto y, a continuación, permita almacenar al usuario tantas
frases como el usuario desee
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void Menu();

void CrearArchivo();
void Frases(string);

ofstream archivo; 

int main()
{
	Menu();
	
	return 0;
}

void CrearArchivo()
{
	string nombreArchivo;
	cout<<"Digite el nombre del archivo: "; getline(cin, nombreArchivo);
	cout<<endl;
	
	archivo.open(nombreArchivo.c_str(), ios::out);
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo"<<endl;
		exit(1);
	}
	
	cout<<"Archivo "<<nombreArchivo<<" creado con exito\n\n";
}

void Menu()
{
	string frase;
	int opcion = -1;
	do
	{
		cout<<"\t. :MENU: .\n\n";
		cout<<"1. Digitar una frase nueva al archivo de texto\n"; 
		cout<<"0. Salir\n";
		cout<<"Opcion: ";cin>>opcion;
		
		switch(opcion)
		{
			case 0:
				cout<<"\nSaliendo..."<<endl<<endl;
				archivo.close();
				break;
			
			case 1:
				fflush(stdin);
				CrearArchivo();
				cout<<"\nDigite una frase a incorporar: "; getline(cin, frase);
				Frases(frase);
				break;
				
			default:
				cout<<"\nOpcion no valida, ingrese nuevamente."<<endl;
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}

void Frases(string frase)
{
	archivo<<frase<<endl;
	cout<<"\n\tfrase: "<<frase<<" adherida con exito\n\n";
}
