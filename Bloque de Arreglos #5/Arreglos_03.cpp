/* 3. Escribe un programa que lea de la entrada est�ndar un vector de n�meros y muestre en la salida est�ndar los n�meros
del vector con sus �ndices asociados */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int tamano;
	
	cout<<"Digite el tamano del vector: "; cin>>tamano;
	int numeros[tamano];
	
	for(int i=0; i<tamano; i++)
	{
		cout<<"Ingrese el numero en la posicion "<<(i+1)<<": "; cin>>numeros[i];
	}
	
	for(int i=0; i<tamano; i++)
	{
		cout<<"El numero correspondiente a la posicion "<<i<<" es "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
