/* 4. Escribe un programa que defina un vector de n�meros y muestre en la salida est�ndar el vector en orden inverso
del �ltimo al primer elemento */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int numeros[] = {10,20,30,40,50,60,2,3,54,23};
	
	int tamanoNumeros = sizeof(numeros)/sizeof(int);
	
	for(int i = tamanoNumeros-1; i>=0; i--)
	{
		cout<<"El numero en la posicion "<<i<<" es: "<<numeros[i]<<endl;
	}
	
	system("pause");
	return 0;
}
