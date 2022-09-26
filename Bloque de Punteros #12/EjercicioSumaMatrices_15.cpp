/* 9. Realice la suma de dos matrices utilizando punteros
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void PedirDatos();
void MostrarMatriz(int **, int, int);
void SumaMatrices(int **, int **, int, int);

int **puntero_matriz1, **puntero_matriz2, nFilas, nColumnas;

int main()
{
	PedirDatos();
	MostrarMatriz(puntero_matriz1, nFilas, nColumnas);
	MostrarMatriz(puntero_matriz2, nFilas, nColumnas);
	
	SumaMatrices(puntero_matriz1, puntero_matriz2, nFilas, nColumnas);
	
	cout<<"Resultado:";
	MostrarMatriz(puntero_matriz1, nFilas, nColumnas);
	
	//Liberar memoria
	for(int i=0; i<nFilas; i++)
	{
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	for(int i=0; i<nFilas; i++)
	{
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite el numero de filas: "; cin>>nFilas;
	cout<<"Digite el numero de columnas: "; cin>>nColumnas;
	
	puntero_matriz1 = new int *[nFilas]; //Reservando memorias para las filas
	for (int i=0; i<nFilas; i++)
	{
		puntero_matriz1[i] = new int[nColumnas]; //Reservando memoria para las columnas
	}
	
	cout<<"\nDigitando elementos de la matriz 1: "<<endl;
	
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j); //puntero_matriz[i][j] <-- Es exactamente lo mismo!!
		}
	}
	
	//MATRIZ 2
	puntero_matriz2 = new int *[nFilas]; //Reservando memorias para las filas
	for (int i=0; i<nFilas; i++)
	{
		puntero_matriz2[i] = new int[nColumnas]; //Reservando memoria para las columnas
	}
	
	cout<<"\nDigitando elementos de la matriz 2: "<<endl;
	
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz2+i)+j); //puntero_matriz[i][j] <-- Es exactamente lo mismo!!
		}
	}
}

void MostrarMatriz(int **puntero_matriz, int nFilas, int nColumnas)
{
	cout<<"\n\nImprimiento matriz:\n";
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<*(*(puntero_matriz+i)+j)<<"|";
		}
		cout<<endl;
	}
	cout<<endl;
}

void SumaMatrices(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nColumnas)
{
	//matriz1[i][j] += matriz2[i][j]
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
		}
	}
	
	/*cout<<"\n\nImprimiento matriz:\n";
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<*(*(puntero_matriz1+i)+j)<<"|";
		}
		cout<<endl;
	}
	cout<<endl;*/
}
