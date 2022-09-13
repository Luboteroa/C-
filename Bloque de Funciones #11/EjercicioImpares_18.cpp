/* 14. Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima un vector con los elementos impares del 
vector recibido */

#include<iostream>
#include<conio.h>

using namespace std;

void TomaDeDatos(int numeros[], int);
void EsImpar(int numeros[], int impares[], int&);
void MuestraDeDatos(int numeros[], int);

int main()
{
	int tamano;
	cout<<"Ingrese el tamano del vector: "; cin>>tamano;
	int numeros[tamano], impares[tamano];
	
	TomaDeDatos(numeros, tamano);
	
	EsImpar(numeros, impares, tamano);
	
	MuestraDeDatos(impares, tamano);
	
	getch();
	return 0;
}

void TomaDeDatos(int numeros[], int tamano)
{
	for(int i=0; i<tamano; i++)
	{
		cout<<"Digite el "<<(i+1)<<": "; cin>>numeros[i];
	}
	cout<<endl;
}	

void EsImpar(int numeros[], int impares[], int& size)
{
	int aux=0;
	for(int i=0; i<size; i++)
	{
		if(numeros[i] % 2 != 0)
		{
			//Es impar
			impares[aux] = numeros[i];
			aux++; 
		}
	}
	size = aux;
}

void MuestraDeDatos(int impares[], int tamano)
{
	for(int i=0; i<tamano; i++)
	{
		cout<<impares[i]<<"|";
	}
	cout<<endl;
}
