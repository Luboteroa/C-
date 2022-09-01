/* 6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cuál de todos tiene el mejor promedio,
e imprimir sus datos. */

#include<iostream>
#include<conio.h>

using namespace std;

struct Promedio
{
	float nota1, nota2, nota3;
};

struct Alumno{
	char nombre[20];
	int edad;
	char sexo[20];
	struct Promedio promedioAlumno;
}alumnos[30];

int main()
{
	int n_Alumnos, mejorPos;
	float promedio, mejorPromedio = -1;
	cout<<"Ingrese el numero de alumnos: "; cin>>n_Alumnos;
	cout<<endl;
	
	for(int i=0; i<n_Alumnos; i++)
	{
		fflush(stdin);
		cout<<"Alumno #"<<(i+1)<<endl;
		cout<<"Ingresar nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
		fflush(stdin);
		cout<<"Ingresar edad: "; cin>>alumnos[i].edad;
		fflush(stdin);
		cout<<"Ingresar sexo: "; cin.getline(alumnos[i].sexo, 10, '\n');
		
		cout<<"\nIngresar nota #1: ";cin>>alumnos[i].promedioAlumno.nota1;
		cout<<"Ingresar nota #2: "; cin>>alumnos[i].promedioAlumno.nota2;
		cout<<"Ingresar nota #3: "; cin>>alumnos[i].promedioAlumno.nota3;
		
		//Promedio alumno actual
		promedio = ((alumnos[i].promedioAlumno.nota1 + alumnos[i].promedioAlumno.nota2 + alumnos[i].promedioAlumno.nota3)/3);
		if(promedio>mejorPromedio)
		{
			mejorPromedio = promedio;
			mejorPos = i;
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"El alumno con mejor promedio fue: "<<endl;
	cout<<alumnos[mejorPos].nombre<<endl;
	cout<<"Tiene "<<alumnos[mejorPos].edad<<" anos de edad."<<endl;
	cout<<"Y tiene un promedio de: "<<mejorPromedio<<endl;
	
	getch();
	return 0;
}
