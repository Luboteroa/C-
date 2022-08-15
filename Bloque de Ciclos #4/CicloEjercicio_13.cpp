/* 10. Escriba un programa que calcule el valor de: 1! + 2! + 3! +...+ n! (suma de factoriales) */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int n, suma, factorial=1;
	
	cout<<"Digite el numero de elementos a sumar: "; cin>>n;
	
	for(int i = 1; i<=n; i++)
	{
		factorial *= i;
		suma += factorial;
	}
	
	cout<<"El resultado es: "<<suma<<endl; 
	
	system("pause");
	return 0;
}
