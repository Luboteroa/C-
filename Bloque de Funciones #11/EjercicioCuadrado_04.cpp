/* 2. Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
La funci�n deber� ser capaz de elevar al cuadrado n�meros flotantes. */

#include<iostream>
#include<conio.h>

using namespace std;

float num1;

void PedirDatos();
void Al_Cuadrado(float x);

int main()
{
	PedirDatos();
	Al_Cuadrado(num1);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite un numero: "; cin>>num1;
}

void Al_Cuadrado(float x)
{
	float cuadrado = x*x;
	
	cout<<"El numero elevado al cuadrado es: "<<cuadrado<<endl;
}

