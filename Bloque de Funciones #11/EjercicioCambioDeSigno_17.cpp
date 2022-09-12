/* Realiza una función que tome como parámetros un vector de números y su tamaño y cambie el signo de los elementos del vector */

#include<iostream>
#include<conio.h>

using namespace std;

void CambiarSigno(int numeros[], int size);
void MostrarDatos(int numeros[], int size);

int main()
{
	int numeros[] = {1,2,3,4,5,-7,-6,2,-3};
	int size = 9;
	
	CambiarSigno(numeros, size);
	MostrarDatos(numeros, size);
	
	getch();
	return 0;
}

void CambiarSigno(int numeros[], int size)
{
	for(int i=0; i<size; i++)
	{
		numeros[i] *= -1; 
	}
}

void MostrarDatos(int numeros[], int size)
{
	cout<<"Numeros matriz:"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<numeros[i]<<"|";
	}
}


