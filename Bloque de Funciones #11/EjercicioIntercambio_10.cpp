/* 7. Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia */

#include<iostream>
#include<conio.h>

using namespace std;

void Intercambio(float&, float&);

int main()
{
	float num1, num2;
	cout<<"Introduzca dos numeros: "; cin>>num1>>num2;
	
	Intercambio(num1, num2);
	
	cout<<"Los valores quedaron intercambiados: "<<num1<<", "<<num2;
	
	getch();
	return 0;
}

void Intercambio (float& val1, float& val2)
{
	float guardar = val1;
	val1 = val2;
	val2 = guardar;
}
