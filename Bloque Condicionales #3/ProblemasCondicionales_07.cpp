/* 5. Escriba un programa que detecte una entrada un car�cter y defina si es una vocal min�scula o no */

#include <iostream>

using namespace std;

int main()
{
	char letra;
	
	cout<<"Ingrese un caracter: "; cin>>letra;
	
	switch(letra)
	{
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula"; break;
		default: cout<<"No es una vocal minuscula"; break;
	}
	
	return 0;
}
