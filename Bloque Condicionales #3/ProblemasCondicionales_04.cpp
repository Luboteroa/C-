/* 2. Escriba un programa que lea tres numeros y determine cuál es el mayor de estos */

#include<iostream>

using namespace std;

int main()
{
	float n1, n2, n3;
	
	cout<<"Digite tres numeros: "; cin>>n1>>n2>>n3;
	
	if(n1>=n2 && n1>=n3)
	{
		cout<<"El numero mayor es: "<<n1;
		return 0;
	}
	else if(n2>=n3)
	{
		cout<<"El numero mayor es: "<<n2;
		return 0;
	}
	else 
	{
		cout<<"El numero mayor es: "<<n3;
	}
	
	
	return 0;
}
