/* 4. Comprobar si un numero ingresado es positivo o negativo */

#include<iostream>

using namespace std;

int main()
{
	float numero;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	if(numero == 0) { cout<<"El numero es 0"; return 0; }
	
	if(numero < 0) { cout<<"El numero es negativo"; return 0;}
	
	cout<<"El numero es positivo";
	
	return 0;
}
