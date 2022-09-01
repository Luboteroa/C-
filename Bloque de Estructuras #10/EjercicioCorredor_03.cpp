/* 1. Hacer una estructura llamada corredor, en la cual se tendrán las siguientes campos:
Nombre, edad, sexo, club, 
pedir datos al usuario para un corredor y asignarle una categoría de competición:

- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años

Posteriormente, imprimir todos los datos del corredor, incluída su categoría de competición */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Corredor
{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}corredor1;

int main()
{
	char categoria[20];
	
	cout<<"Nombre: "; cin.getline(corredor1.nombre, 20, '\n');
	cout<<"Edad: "; cin>>corredor1.edad;
	fflush(stdin);
	cout<<"Sexo: "; cin.getline(corredor1.sexo, 10, '\n');
	cout<<"Club: "; cin.getline(corredor1.club, 20, '\n');
	
	if(corredor1.edad <= 18)
	{
		strcpy(categoria, "Juvenil");
	}
	else if(corredor1.edad <= 40)
	{
		strcpy(categoria, "Senior");
	}
	else
	{
		strcpy(categoria, "Veterano");
	}
	
	cout<<endl;
	cout<<"Datos del corredor:"<<endl;
	cout<<"Nombre: "<<corredor1.nombre<<endl;
	cout<<"Edad: "<<corredor1.edad<<endl;
	cout<<"Sexo: "<<corredor1.sexo<<endl;
	cout<<"Club: "<<corredor1.club<<endl;
	cout<<"La categoria del corredor ingresado es: "<<categoria<<endl;
	
	getch();
	return 0;
}
