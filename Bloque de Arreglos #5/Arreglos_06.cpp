/* 6. Escribe un programa que defina un vector de números y calcule si existe algún número en el vector cuyo valor
equivale a la suma del resto de números del vector */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int tamanoVector, suma = 0, mayor = -INFINITY;
	
	cout<<"Digite el tamano del vector: "; cin>>tamanoVector;
	int numeros[tamanoVector];
	
	for(int i=0; i<tamanoVector; i++)
	{
		cout<<"Digite el numero en la posicion "<<(i+1)<<": "; cin>>numeros[i];
		
		if(numeros[i] > mayor)
		{
			mayor = numeros[i];
		}
		suma += numeros[i];
	}
	
	if(mayor == suma-mayor)
	{
		cout<<"El numero "<<mayor<<" equivale a la suma de los demas"<<endl;
		return 0;
	}
	cout<<"Ningun numero equivale a la suma de los demas"<<endl;
	
	getch();
	return 0;
}
