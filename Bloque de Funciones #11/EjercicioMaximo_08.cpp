/* 6. Escriba una plantilla de función llamada Maximo() que devuelva el valor máximo de tres argumentos que se transmitan a la función
cuando sea llamada. 
Suponga que los tres argumentos serán del mismo tipo de datos */

#include<iostream>
#include<conio.h>

using namespace std;

template<class TIPOD>
void Maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);

int main()
{
	Maximo("Hola", "No", "Carlos");
	
	getch();
	return 0;
}

template<class TIPOD>
void Maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3)
{
	TIPOD maximo;
	if(dato1>dato2)
	{
		if(dato1>dato3)
		{
			maximo = dato1;
		}
		else
		{
			maximo = dato3;
		}
	}
	else if(dato2>dato3)
	{
		maximo = dato2;
	}
	else
	{
		maximo = dato3;
	}
	
	cout<<"El maximo es: "<<maximo<<endl;
}
