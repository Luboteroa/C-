/* 2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int tamanoMatriz;
	
	cout<<"Ingrese el tamano de la matriz cuadrada: "; cin>>tamanoMatriz;
	
	int matrizCuadrada[tamanoMatriz][tamanoMatriz];
	
	//Ingresar los datos de la matriz
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<"Ingrese el dato de la fila "<<i<<" y la columna "<<j<<": "; cin>>matrizCuadrada[i][j];
		}
	}
	
	//Mostrar los datos de la diagonal
	for(int i=0; i<tamanoMatriz; i++)
	{
		cout<<matrizCuadrada[i][i]<<" ";
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
