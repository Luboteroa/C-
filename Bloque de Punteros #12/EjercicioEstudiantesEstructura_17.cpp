/* 11. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
Nombre, edad, promedio, 
pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Alumno
{
	char nombre[30];
	int edad;
	float promedio;
}alumnos[3], *puntero_alumno = alumnos; 

//Prototipo de función
void PedirDatos();
void CalcularMejorPromedio(Alumno *);

int main()
{
	PedirDatos();
	CalcularMejorPromedio(puntero_alumno);
	
	getch();
	return 0;
}

void PedirDatos()
{
	for(int i=0; i<3; i++)
	{
		fflush(stdin);
		cout<<"Alumno "<<(i+1)<<":"<<endl;
		cout<<"Digite el nombre: "; cin.getline((puntero_alumno + i)->nombre, 30, '\n');
		cout<<"Digite la edad:  "; cin>>(puntero_alumno+i)->edad;
		cout<<"Digite el promedio: "; cin>>(puntero_alumno+i)->promedio;
		cout<<endl;
	}
}

void CalcularMejorPromedio(Alumno *puntero_alumno)
{
	float mayor = -1;
	int pos = 0;
	for(int i=0; i<3; i++)
	{
		if((puntero_alumno+i)->promedio > mayor)
		{
			mayor = (puntero_alumno+i)->promedio; //comprobar el mayor promedio;
			pos = i;	
		}
	}
	
	//Imprimir los datos del alumno con el mejor promedio:
	cout<<"\nEl alumno con el mejor promedio fue: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Tiene "<<(puntero_alumno+pos)->edad<<" anios."<<endl;
	cout<<"Y tiene un promedio de: "<<(puntero_alumno+pos)->promedio<<endl;
}
