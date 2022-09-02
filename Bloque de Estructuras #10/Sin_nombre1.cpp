/* 8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos:
El nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores:
Uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad. */

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona
{
	char nombre[20];
	char tieneDiscapacidad[1];
}personas[100], personasConDiscapacidad[100], personasSinDiscapacidad[100];

int main()
{
	int n_usuarios;
	cout<<"Ingrese el numero de usuarios a registrar: "; cin>>n_usuarios;
	
	for(int i=0; i<n_usuarios; i++)
	{
		cout<<"Persona #"<<(i+1)<<endl;
		cout<<"Ingrese el nombre: "; cin.getline(personas, 20, '\n');
		cout<<"¿Tiene una discapacidad? Escriba 'V' para si y 'F' para no: "; cin.getline(personas, 1, '\n');
	}
	getch();
	return 0;
}
