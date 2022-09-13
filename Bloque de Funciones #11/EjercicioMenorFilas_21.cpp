/* 16. Realice una función que dada una matriz y un número de filas de la matriz devuelva el menor de los elementos almacenados en dicha fila */

#include<iostream>
#include<conio.h>

using namespace std;

void PedirDatos(int numeros[][100], int& nfilas, int& ncolumnas);
void MostrarDatos(int numeros[][100], int nfilas, int ncolumnas);

void MenorFila(int numeros[][100], int vectorNumerosMenores[], int nfilas, int ncolumnas);
void MostrarDatosFila(int vectorNumerosMenores[], int nfilas);

int main()
{
	int numeros[100][100];
	int nfilas, ncolumnas;
	
	PedirDatos(numeros, nfilas, ncolumnas);
	int vectorNumerosMenores[nfilas];
	
	MostrarDatos(numeros, nfilas, ncolumnas);
	
	MenorFila(numeros, vectorNumerosMenores, nfilas, ncolumnas);
	MostrarDatosFila(vectorNumerosMenores, nfilas);
	 
	getch();
	return 0;
}

void PedirDatos(int numeros[][100], int& nfilas, int& ncolumnas)
{
	cout<<"Digite el numero de filas: "; cin>>nfilas;
	cout<<"Digite el numero de columnas: "; cin>>ncolumnas;
	cout<<endl;
	
	for (int i=0; i<nfilas; i++)
	{
		for(int j=0; j<ncolumnas; j++)
		{
			cout<<"Digite el numero de la fila ["<<i<<"] y la columna ["<<j<<"]: "; cin>>numeros[i][j];
		}
	}
	cout<<endl;
}

void MostrarDatos(int numeros[][100], int nfilas, int ncolumnas)
{
	for(int i=0; i<nfilas; i++)
	{
		for(int j=0; j<ncolumnas; j++)
		{
			cout<<numeros[i][j]<<"|";
		}
		cout<<endl;
	}
	cout<<endl;
}

void MenorFila(int numeros[][100], int vectorNumerosMenores[], int nfilas, int ncolumnas)
{
	for(int i=0; i<nfilas; i++)
	{
		int numMenor = 99999999;
		for(int j=0; j<ncolumnas; j++)
		{
			if(numeros[i][j]<numMenor)
			{
				numMenor = numeros[i][j];
			}
		}
		vectorNumerosMenores[i] = numMenor;
	}
}

void MostrarDatosFila(int vectorNumerosMenores[], int nfilas)
{
	cout<<"Numeros menores de cada fila:"<<endl;
	for(int i=0; i<nfilas; i++)
	{
		cout<<"|"<<vectorNumerosMenores[i]<<"|"<<endl;;
	}
	cout<<endl;
}
