//Paso de parámetros tipo Matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>
#include<conio.h>

using namespace std;

void MostrarMatriz(int m[][3], int, int);
void CalcularCuadrado(int m[][3], int, int);

int main()
{
	const int NFILAS = 2;
	const int NCOLUMNAS = 3;
	int m[NFILAS][NCOLUMNAS] = {{1,2,3},{4,5,6}};
	
	CalcularCuadrado(m,2,3);
	MostrarMatriz(m,2,3);
	
	getch();
	return 0;
}

void CalcularCuadrado(int m[][3], int nfilas, int ncolumnas)
{
	for(int i=0; i<nfilas; i++)
	{
		for(int j=0; j<ncolumnas; j++)
		{
			m[i][j] *= m[i][j];
		}
	}
}

void MostrarMatriz(int m[][3], int nfilas, int ncolumnas)
{
	cout<<"Mostrando matriz original: "<<endl;
	for(int i=0; i<nfilas; i++)
	{
		for(int j=0; j<ncolumnas; j++)
		{
			cout<<m[i][j]<<"|";
		}
		cout<<endl;
	}
}
