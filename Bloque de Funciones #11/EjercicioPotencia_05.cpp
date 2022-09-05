/* 3. Escriba una función nombrada funpot() que eleve un numero entero que se le transmita a una potencia en número entero positivo y despliegue
el resultado. El número entero positivo deberá ser el segundo valor transmitido a la función */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de Función
void PedirDatos();
void Funpot(float x, int n);

float numero; 
int potencia;

int main()
{
	PedirDatos();
	Funpot(numero, potencia);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite un numero: "; cin>>numero;
	do
	{
		cout<<"Digite la potencia del numero: "; cin>>potencia;
	}while(potencia<0);
}

void Funpot(float x, int n)
{
	long resultado=1;
	
	for(int i=0; i<potencia; i++)
	{
		resultado *= x;
	}
	
	cout<<"El resultado de la potencia es: "<<resultado<<endl;
}
