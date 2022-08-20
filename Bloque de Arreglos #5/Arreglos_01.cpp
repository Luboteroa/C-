/* 1. Escribe un programa que defina un vector de número y calcule la suma de sus elementos */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int numeros[] = {1,2,3,4,5};
	int suma = 0;
	
	for(int i = 0; i<5; i++)
	{
		suma += numeros[i];
	}
	
	cout<<"El resultado de la suma en el arreglo es: "<<suma;
	
	getch();
	return 0;
}
