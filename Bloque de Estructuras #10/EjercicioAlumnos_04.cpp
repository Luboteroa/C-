/* 2. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
Nombre, edad, promedio.
Pedir datos al usuario para 3 alumnos,
comprobar cuál de los 3 tiene el mejor promedio y posteriormente mostrar los datos del alumno */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct Alumno
{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];

int main()
{
	char nombreMejor[20];
	int edadMejor;
	float promedioMejor = -1;
	for(int i=0; i<3; i++)
	{
		fflush(stdin);
		cout<<"Introduzca el nombre del alumno "<<(i+1)<<": "; cin.getline(alumnos[i].nombre, 20, '\n');
		cout<<"Introduzca la edad del alumno "<<(i+1)<<": "; cin>>alumnos[i].edad;
		cout<<"Introduzca el promedio del alumno "<<(i+1)<<": "; cin>>alumnos[i].promedio;
		cout<<endl;
		
		if(alumnos[i].promedio>promedioMejor)
		{
			strcpy(nombreMejor, alumnos[i].nombre);
			edadMejor = alumnos[i].edad;
			promedioMejor = alumnos[i].promedio;
		}
	}
	
	cout<<"El alumno con mejor promedio fue: "<<nombreMejor<<endl;
	cout<<"Tiene la edad de "<<edadMejor<<" anos."<<endl;
	cout<<"Con un promedio de: "<<promedioMejor<<endl;
	
	getch();
	return 0;
}
