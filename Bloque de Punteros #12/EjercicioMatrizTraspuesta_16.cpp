/* 10. Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta.

NOTA: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void PedirDatos();
void MostrarMatriz(int **, int, int);
void MatrizTraspuesta(int **, int, int);

int **puntero_matriz, **matriz_traspuesta, nFilas, nColumnas;


int main()
{
	PedirDatos();
	MostrarMatriz(puntero_matriz, nFilas, nColumnas);
	
	MatrizTraspuesta(puntero_matriz, nFilas, nColumnas);
	
	//Liberar memoria
	for(int i=0; i<nFilas; i++)
	{
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite el numero de filas: "; cin>>nFilas;
	cout<<"Digite el numero de columnas: "; cin>>nColumnas;
	
	puntero_matriz = new int *[nFilas]; //Reservando memorias para las filas
	for (int i=0; i<nFilas; i++)
	{
		puntero_matriz[i] = new int[nColumnas]; //Reservando memoria para las columnas
	}
	
	cout<<"\nDigitando elementos de la matriz: "<<endl;
	
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j); //puntero_matriz[i][j] <-- Es exactamente lo mismo!!
		}
	}
}

void MostrarMatriz(int **puntero_matriz, int nFilas, int nColumnas)
{
	cout<<"\nImprimiento matriz:\n";
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

void MatrizTraspuesta(int **puntero_matriz, int nFilas, int nColumnas)
{
	matriz_traspuesta = new int *[nColumnas]; //Reservando memorias para las filas
	for (int i=0; i<nColumnas; i++)
	{
		matriz_traspuesta[i] = new int[nFilas]; //Reservando memoria para las columnas
	}
	
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			*(*(matriz_traspuesta+j)+i) = *(*(puntero_matriz+i)+j);
		}
	}
	
	cout<<"MatrizTraspuesta:";
	MostrarMatriz(matriz_traspuesta, nColumnas, nFilas);
	
	//Limpiamos la memoria de la matriz auxiliar que creamos
	for(int i=0; i<nColumnas; i++)
	{
		delete[] matriz_traspuesta[i];
	}
	delete[] matriz_traspuesta;
}
