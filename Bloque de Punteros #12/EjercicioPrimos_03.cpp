/* 3. Determinar si un número es primo o no; con punteros y además indicar en qué posición de memoria se guardó el número */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	bool esPrimo = false;
	int numero, divisores[100], *dir_numero;
	int j=0;
	cout<<"Digite un numero: "; cin>>numero;
	dir_numero = &numero;
	
	for(int i=*dir_numero; i>0; i--)
	{
		if(*dir_numero%i == 0)
		{
			divisores[j] = i;
			j++;
			esPrimo = true;
			if(i==1 && j==2)
			{
				esPrimo = false;
			}
		}	
	}
	
	if(esPrimo==false)
	{
		cout<<"El numero "<<*dir_numero<<" es primo."<<endl;
	}
	else
	{
		cout<<"El numero "<<*dir_numero<<" no es primo."<<endl;
		cout<<"Divisores:"<<endl;
		for(int i=0; i<j;i++)
		{
			cout<<"|"<<divisores[i];
		}
	}
	
	cout<<endl<<endl;
	cout<<"La posicion de memoria es: "<<dir_numero;
	
	getch();
	return 0;
}
