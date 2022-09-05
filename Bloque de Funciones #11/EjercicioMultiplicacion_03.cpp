/*1. Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros, multiplique estos dos números
y despliegue el resultado */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de función
void PedirDatos();
void Mult(float x, float y);

float num1, num2;

int main()
{
	PedirDatos();
	Mult(num1, num2);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite dos numeros: "; cin>>num1>>num2;
}

void Mult(float x, float y)
{
	float multiplicacion = x*y;
	
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
