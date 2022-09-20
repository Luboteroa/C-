/* Transmisión de direcciones

Ejemplo: Intercambiar el valor de dos variables 
*/

#include<iostream>
#include<conio.h>

using namespace std;

void Intercambio(float *, float *);

int main()
{
	float num1 = 20.8, num2 = 6.78;
	
	
	cout<<"Primer numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;
	
	Intercambio(&num1, &num2);  //Llamada a la función intercambio
	
	cout<<endl;
	cout<<"Primero numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;
	
	getch();
	return 0;
}

void Intercambio(float *dirNum1, float *dirNum2)
{
	//Intercambiar las variables
	float aux;
	aux = *dirNum1;
	*dirNum1 = *dirNum2;
	*dirNum2 = aux;
}
