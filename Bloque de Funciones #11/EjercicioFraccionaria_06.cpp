/* Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier n�mero introducido por el usuario. Por ejemplo:
si se introduce el n�mero 256.879 deber�a desplegarse el n�mero 0.879 */

#include<iostream>
#include<conio.h>

using namespace std;

void PedirDatos();
void ParteFraccionaria(float x);

float numero;

int main() 
{
	PedirDatos();
	ParteFraccionaria(numero);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Introduzca un numero con coma flotante: "; cin>>numero;
}

void ParteFraccionaria(float x)
{
	int entero = x;
	float resultado = x - entero;
	
	cout<<"La parte fraccionaria del numero es: "<<resultado<<endl;
}
