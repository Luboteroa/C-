//Estructura básica en C++

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona 
{
	char nombre[20];
	int edad;
}
persona1 = {"Luis Carlos", 21},
persona2 = {"Alejandro", 32},
persona3;

int main()
{
	cout<<"Nombre 1: "<<persona1.nombre<<"\nEdad 1: "<<persona1.edad;
	cout<<endl;
	cout<<"Nombre 2: "<<persona2.nombre<<"\nEdad 2: "<<persona2.edad;
	cout<<endl;
	
	cout<<"Ingrese el nombre de la persona 3: "; cin.getline(persona3.nombre, 30, '\n');
	cout<<"Ingrese la edad de la persona 3: "; cin>>persona3.edad;
	
	cout<<"Nombre 3: "<<persona3.nombre<<"\nEdad 3: "<<persona3.edad;
	cout<<endl;
	
	getch();
	return 0;
}
