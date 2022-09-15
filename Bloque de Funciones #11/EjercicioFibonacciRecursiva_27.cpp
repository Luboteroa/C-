/* Realice una función recursiva para la serie de Fibonacci 
Nota: La serie de Fibonacci está formada por la secuencia de numeros:
0,1,1,2,3,5,8,13,21,34
*/

#include<iostream>
#include<conio.h>

using namespace std;

void Fibonacci(int n, int ite, int iteAnterior);

int numero;

int main()
{
	cout<<"Digite el numero de iteraciones: "; cin>>numero;
	numero--;
	cout<<"|0";
	
	Fibonacci(numero, 1, 0);
	
	getch();
	return 0;
}

void Fibonacci(int n, int ite, int iteAnterior)
{
	if(n==0)
	{
		cout<<"|";
		return;
	}
	else if(n<0)
	{
		cout<<"|";
		return;
	}
	cout<<"|"<<ite;
	n--;
	
	int aux = iteAnterior;
	iteAnterior = ite;
	ite = ite+aux;
	
	Fibonacci(n, ite, iteAnterior);
}
