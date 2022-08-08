/* Realice un programa que calcule y muestre en la salida la suma de los cuadrados de los 10 primeros enteros mayores que cero */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int suma = 0;
	
	for(int i = 1; i<=10; i++)
	{
		int cuadrado = i*i;
		suma += cuadrado;
		cout<<"Cuadrado de "<<i<<" es: "<<cuadrado<<endl;
	}
	cout<<"Resultado de la suma: "<<suma<<endl<<endl;
		
	system("pause");
	return 0;
}
