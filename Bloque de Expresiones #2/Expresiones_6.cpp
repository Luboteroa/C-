//6. Escriba un programa que lea las tres notas de un alumno y calcule la nota final media de dicho alumno

#include<iostream>

using namespace std;

int main()
{
	float nota1, nota2, nota3, promedio = 0;
	
	cout<<"Ingrese su nota 1: "; cin>>nota1;
	cout<<"Ingrese su nota 2: "; cin>>nota2;
	cout<<"Ingrese su nota 3: "; cin>>nota3;
	
	promedio = (nota1 + nota2 + nota3)/3;
	
	cout.precision(3);W
	cout<<"\nSu promedio es: "<<promedio<<endl;
}

