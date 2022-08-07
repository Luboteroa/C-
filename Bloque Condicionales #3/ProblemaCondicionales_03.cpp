/* 1. Escriba un programa que lea dos números y determine cuál de ellos es mayor. */

#include<iostream>

using namespace std;

int main()
{
	float n1, n2;
	
	cout<<"Digite dos numeros: "; cin>>n1>>n2;
	
	if(n1>n2)
	{
		cout<<"El mayor es: "<<n1;
	}
	else if(n2>n1)
	{
		cout<<"El mayor es: "<<n2;
	}
	else
	{
		cout<<"Los numeros son iguales";
	}
	
	return 0;
}
