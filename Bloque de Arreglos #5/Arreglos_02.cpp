/* 2. Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int numeros[] = {1,8,3,5,5};
	int multiplicacion = 1;
	
	int sizeArray = sizeof(numeros)/sizeof(int);
	
	for(int i=0; i<sizeArray; i++)
	{
		multiplicacion *= numeros[i];
	}
	
	cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
	
	system("pause");
	return 0;
}
