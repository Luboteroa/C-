/* Escriba un programa que lea los valores enteros hasta que se introduzca un valor en el rango [20 - 30] o se introduzca el valor 0.
El programa debe entregar la suma de los valores mayores a 0 introducidos */

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	float valor, sumaValores = 0;
	do 
	{
		cout<<"Digite un valor: "; cin>>valor;
		
		if(valor > 0)
		{
			sumaValores += valor;
		}
		
	}while((valor != 0) && ((valor < 20) || (valor > 30)));
	
	cout<<"La suma es: "<<sumaValores<<endl;
	
	system("pause");
	return 0;
}
