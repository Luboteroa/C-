/*1. Escriba una funci�n llamada mult() que acepte dos n�meros en punto flotante como par�metros, multiplique estos dos n�meros
y despliegue el resultado */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de funci�n
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
