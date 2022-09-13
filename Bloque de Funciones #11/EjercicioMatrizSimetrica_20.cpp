/* 15. Desarrollar una función que determine si una matriz es simétrica o no. 

Una matriz es simétrica si: A = A**t

- La matriz debe ser cuadrada.
- Aij = Aji

| 2 5 9 |		| 2 5 9 |		
| 5 8 -1|	->	| 5 8 -1| 	
|9 -1 10|		|9 -1 10|
 	
*/

#include<iostream>
#include<conio.h>

using namespace std;

void TomaDeDatos(int numeros[][], int);

void MuestraDeDatos(int numeros[][], int);

int main()
{
	
	
	getch();
	return 0;
}

void TomaDeDatos(int numeros[][], int tamano)
{
	for(int i=0; i<tamano; i++)
	{
		for(int j=0; j<tamano; j++)
		{
			cout<<"Digite el "<<(i+1)<<": "; cin>>numeros[i];
		}	
		cout<<endl;
	}
	cout<<endl;
}	
