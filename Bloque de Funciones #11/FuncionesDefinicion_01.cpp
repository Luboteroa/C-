// Ejemplo de encontrar el mayor de 2 n�meros 

#include<iostream>
#include<conio.h>

using namespace std;

//Definici�n de una funci�n
int encontrarMax(int x, int y)
{
	int numMax;
	if(x>y)
	{
		numMax = x;
	}
	else
	{
		numMax = y;
	}
	return numMax;
}

int main()
{
	int n1, n2, mayor;
	
	cout<<"Digite 2 numeros: "; cin>>n1>>n2;
	
	cout<<"El mayor de los dos numeros es: "<<encontrarMax(n1,n2)<<endl;
	 
	getch();
	return 0;
}


