/* Punteros a estructuras
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Persona
{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;

//Prototipo de función
void PedirDatos();
void MostrarDatos(Persona *);

int main()
{
	PedirDatos();
	MostrarDatos(puntero_persona);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite su nombre: "; cin.getline(puntero_persona->nombre, 30, '\n');
	cout<<"Digite su edad: "; cin>>puntero_persona->edad;
}

void MostrarDatos(Persona *puntero_persona)
{
	cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"Su edad es: "<<puntero_persona->edad<<endl; 
}
