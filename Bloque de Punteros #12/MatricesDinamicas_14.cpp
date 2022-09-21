/* Matrices dinámicas:

Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

**punteroMatriz -> *puntero_fila -> [int] [int]
				   *puntero_fila -> [int] [int]
				   *puntero_fila -> [int] [int]
				   
1 2 3 punteroFila: 1	-> 2 3
4 5 6 punteroFila: 4	-> 5 6
7 8 9 punteroFila: 7	-> 8 9
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void PedirDatos();
void MostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nColumnas;

int main()
{
	PedirDatos();
	MostrarMatriz(puntero_matriz, nFilas, nColumnas);
	
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
	cout<<"\n\nImprimiento matriz:\n";
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<*(*(puntero_matriz+i)+j);
		}
		cout<<endl;
	}
	cout<<endl;
}
