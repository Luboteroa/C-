/* 5. Hacer 2 estructuras, una llamada promedio que tendrá los siguientes campos: 
Nota1, Nota2, Nota3; 
Y otra llamada Alumno que tendrá los siguientes campos: 
Nombre, sexo, edad;
Hacer que la estructura promedio esté anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio,
y por último imprimir todos sus datos, incluído el promedio. */

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
	char sexo[10];
	struct Promedio promedioAlumno;
}alumno1;

int main()
{
	//Ingresar datos
	cout<<"Introduzca el nombre del alumno: "; cin.getline(alumno1.nombre,20,'\n');
	cout<<"Introduzca la edad del alumno: "; cin>>alumno1.edad;
	fflush(stdin);
	cout<<"Introduzca el sexo del alumno: "; cin.getline(alumno1.sexo,20,'\n');
	cout<<"Ingrese la Nota #1: "; cin>>alumno1.promedioAlumno.nota1;
	cout<<"Ingrese la Nota #2: "; cin>>alumno1.promedioAlumno.nota2;
	cout<<"Ingrese la Nota #3: "; cin>>alumno1.promedioAlumno.nota3;
	cout<<endl;
	
	//Mostrar datos alumno
	cout<<"Las notas del alumno fueron: "<<endl;
	cout<<"Nota #1: "<<alumno1.promedioAlumno.nota1<<endl;
	cout<<"Nota #2: "<<alumno1.promedioAlumno.nota2<<endl;
	cout<<"Nota #3: "<<alumno1.promedioAlumno.nota3<<endl;
	
	//Mostrar promedio alumno
	cout<<endl;
	cout<<"Su promedio fue: "<<((alumno1.promedioAlumno.nota1+alumno1.promedioAlumno.nota2+alumno1.promedioAlumno.nota3)/3)<<endl;
	
	getch();
	return 0;
}
