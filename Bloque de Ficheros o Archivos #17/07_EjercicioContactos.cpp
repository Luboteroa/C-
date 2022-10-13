/* Ejercicio 4. Hacer un programa en C++. Para guardar números telefónicos que muestre un menú con las siguientes opciones:

	1. Crear(nombre, apellidos, teléfono)
	2. Agregar más contactos(nombre, apellidos, teléfono)
	3. Visualizar contactos existentes
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void Menu();

void CrearArchivo();
void AddText();
void LeerArchivo();
void CerrarArchivo();

void Frases(string);

ofstream archivo; 
ifstream archivoLeer;

string nombreArchivo, texto;

int main()
{
	Menu();
	
	return 0;
}

void CrearArchivo()
{
	archivo.close();
	
	cout<<"Digite el nombre del archivo: "; getline(cin, nombreArchivo);
	cout<<endl;
	
	archivo.open(nombreArchivo.c_str(), ios::out);
	
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo"<<endl;
		return;
	}
	
	cout<<"Archivo '"<<nombreArchivo<<"' abierto con exito\n\n";
	archivo.close();
}

void AddText()
{	
	archivo.open(nombreArchivo.c_str(), ios::app); //Abrimos el archivo en modo añadir 
	  
	if(archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		return;
	}
	
	cout<<"Digite el texto que desea implementar: "; getline(cin, texto);
	archivo<<texto<<endl;
	
	cout<<"\tTexto: '"<<texto<<"' adherido con exito\n\n";
	
	archivo.close();
}

void LeerArchivo()
{		
	archivoLeer.open(nombreArchivo.c_str(), ios::out);
	cout<<"\nNombre archivo: "<<nombreArchivo;
	
	if(archivoLeer.fail())
	{
		cout<<"\nNo se encontro la ubicacion del archivo.\n";
		return;
	}
	
	cout<<endl;
	while(!archivoLeer.eof())
	{
		getline(archivoLeer, texto);
		cout<<texto<<endl;
	}
	
	archivoLeer.close();
}

void Menu()
{
	int opcion = -1;
	do
	{
		cout<<"\t. :MENU: .\n\n";
		cout<<"1. Cambiar o crear nuevo fichero\n"; 
		cout<<"2. Aniadir texto a un archivo especifico\n";
		cout<<"3. Leer fichero\n";
		cout<<"4. Cerrar archivo\n";
		cout<<"0. Salir\n";
		cout<<"Opcion: ";cin>>opcion;
		
		switch(opcion)
		{	
			case 1:
				fflush(stdin);
				CrearArchivo();
				break;
				
			case 2:
				fflush(stdin);
				AddText();
				break;
				
			case 3:
				fflush(stdin);
				LeerArchivo();
				break;
				
			case 0:
				cout<<"\nSaliendo..."<<endl<<endl;
				break;
				
			default:
				cout<<"\nOpcion no valida, ingrese nuevamente."<<endl;
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}
