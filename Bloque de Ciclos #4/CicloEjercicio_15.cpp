/* 12. Hacer un programa que calcule el resultado de las siguiente expresión: (1-2)+(3-4)+(5-6)...n */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int n, resultado = 0;
	
	cout<<"Digite el numero de operaciones: "; cin>>n;
	
	for(int i = 1; i<=n; i++)
	{
		if(i % 2 == 0) //Si es par se le resta
		{
			resultado -= i;
		}
		else //No es par
		{
			resultado += i;
		}
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	system("pause");
	return 0;
}
