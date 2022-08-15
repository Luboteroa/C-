/* 8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1 */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int n, suma;
	cout<<"Digite el numero de valores impares a sumar: "; cin>>n;
	
	for(int i = 1; i<= 2*n-1; i += 2)
	{
		suma += i;
	}
	
	cout<<"El resultado es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
