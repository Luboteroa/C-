/* Escriba un programa que solicite un entero y analizar si este est� entre la edad de (18 a 25) a�os */

#include<iostream>

using namespace std;

int main ()
{
	int edad;
	
	cout<<"Introduzca la edad: "; cin>>edad;
	
	if(edad < 18 || edad > 25)
	{
		cout<<"Su edad esta fuera del rango";
		return 0;
	}
	
	cout<<"Su edad esta en el rango";
	return 0;
}
