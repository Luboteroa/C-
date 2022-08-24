/* 1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si ésta 
supera a 10 caracteres mostrarla en pantalla, caso contrario, no mostrarla */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
	char nombre[20];
	
	cout<<"Digite la cadena de caracteres: ";
	cin.getline(nombre,20,'\n');
	
	if(strlen(nombre)>10)
	{	
		system("pause");
		return 0;
	}
	cout<<nombre<<endl;
	
	system("pause");
	return 0;
}
