/* Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por el usuario. Por ejemplo:
si se introduce el número 256.879 debería desplegarse el número 0.879 */

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
