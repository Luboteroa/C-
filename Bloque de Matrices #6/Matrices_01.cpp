/* 1. Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas. Posteriormente, mostrar
la matriz en pantalla */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int nFilas, nColumnas;
	
	cout<<"Digite el numero de filas: "; cin>>nFilas;
	cout<<"Digite el numero de columnas: "; cin>>nColumnas;
	int matriz[nFilas][nColumnas]; //definimos la matriz
	
	//Almacenando los elementos en la matriz
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<"Digite el numero en la fila "<<i<<" y en la columna "<<j<<": "; cin>>matriz[i][j];
		}
	}
	
	cout<<endl;
	//Mostrando la matriz anidada
	for(int i=0; i<nFilas; i++)
	{
		for(int j=0; j<nColumnas; j++)
		{
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
