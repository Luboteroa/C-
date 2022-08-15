/* Escriba un programa que calcule el valor de: 1+2+3+4+5...n */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int n, suma=0;
	
	cout<<"Digite el numero de valores de la suma "; cin>>n;
	
	for(int i = 1; i<=n; i++)
	{
		suma += i;
	}
	
	cout<<"El resultado es: "<<suma;
	
	getch();
	return 0;
}
