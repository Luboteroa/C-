/* 8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos:
El nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores:
Uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad. */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Persona
{
	char nombre[20];
	char tieneDiscapacidad[1];
}personas[100];

int main()
{
	char personasConDiscapacidad[100][20], personasSinDiscapacidad[100][20];

	int n_usuarios;	
	cout<<"Ingrese el numero de usuarios a registrar: "; cin>>n_usuarios;
	
	for(int i=0; i<n_usuarios; i++)
	{
		cout<<"Persona #"<<(i+1)<<endl;
		cout<<"Ingrese el nombre: "; cin.getline(personas[i].nombre, 20, '\n');
		cout<<"¿Tiene una discapacidad? Escriba 'V' para si y 'F' para no: "; cin.getline(personas[i].tieneDiscapacidad, 1, '\n');
		
		if(strcmp(personas[i].tieneDiscapacidad, "V"))
		{
			strcpy(personasConDiscapacidad[i][20], personas[i].nombre);
		}
	}
	getch();
	return 0;
}
