/* Paso de datos estructura a funciones */

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona
{
	char nombre[30];
	int edad;
}p1;

//Prototipo
void PedirDatos();
void MostrarDatos(Persona);

int main()
{
	PedirDatos();
	MostrarDatos(p1);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite su nombre: "; cin.getline(p1.nombre, 30, '\n');
	cout<<"Digite su edad: "; cin>>p1.edad;
	cout<<endl;
}

void MostrarDatos(Persona persona)
{
	cout<<"Su nombre es: "<<persona.nombre<<endl;
	cout<<"Su edad es: "<<persona.edad<<endl;
}
