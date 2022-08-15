/* 11. Escriba un programa que calcule el valor de: 2**1 + 2**2 + 2**3+...2**n */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int n, suma;
	
	cout<<"Ingrese el numero de valores: "; cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		suma += pow(2,i);
	}
	
	cout<<"El resultado es: "<<suma<<endl;
	
	getch();
	return 0;	
}
