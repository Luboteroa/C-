/* Realizar un programa que lea un arreglo de estructuras 
los datos de N empleados de la empresa y que imprima los datos de los empleados con mayor y menor salario */

#include<iostream>
#include<conio.h>

using namespace std;

struct Empresa
{
	char nombre[20];
	int edad;
	float salario;
}empleados[3];

int main()
{
	float mejorSalario = -1, peorSalario = 9999999999; int posMejor, posPeor;
	
	//Pedimos los datos al usuario
	for(int i=0; i<3; i++)
	{
		fflush(stdin);
		cout<<"Introduzca el nombre del empleado "<<(i+1)<<": "; cin.getline(empleados[i].nombre, 20, '\n');
		cout<<"Introduzca la edad del empleado "<<(i+1)<<": "; cin>>empleados[i].edad;
		cout<<"Introduzca el salario del empleado "<<(i+1)<<": "; cin>>empleados[i].salario;
		cout<<endl;
		
		if(empleados[i].salario>mejorSalario)
		{
			mejorSalario = empleados[i].salario;
			posMejor = i;
		}
		
		else if(empleados[i].salario<peorSalario)
		{
			peorSalario = empleados[i].salario;
			posPeor = i;
		}
	}
	
	cout<<endl;
	cout<<"El empleado con mejor salario fue: "<<empleados[posMejor].nombre<<endl;
	cout<<"Con una edad de "<<empleados[posMejor].edad<<" anos."<<endl;
	cout<<"Y un salario de: "<<empleados[posMejor].salario<<"$"<<endl;
	
	cout<<endl<<"Sin embargo,";
	cout<<"El empleado con peor salario fue: "<<empleados[posPeor].nombre<<endl;
	cout<<"Con una edad de "<<empleados[posPeor].edad<<" anos."<<endl;
	cout<<"Y un salario de: "<<empleados[posPeor].salario<<"$"<<endl;
	
	getch();
	return 0;
}
