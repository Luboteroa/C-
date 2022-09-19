/* 1. Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando el número. Con punteros. */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numero, *dir_num;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	dir_num = &numero;
	
	
	if(*dir_num % 2 == 0)
	{
		cout<<"El numero "<<*dir_num<<" es par."<<endl;
	}
	else
	{
		cout<<"El numero "<<*dir_num<<" es impar."<<endl;
	}
	cout<<"Posicion: "<<dir_num<<endl;
	
	getch();
	return 0;
}
