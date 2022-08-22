/* 6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3 */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int tamanoMatriz;
	
	cout<<"Ingrese el tamano de las matrices cuadrada: "; cin>>tamanoMatriz;
	
	int matrizCuadrada1[tamanoMatriz][tamanoMatriz], matrizCuadrada2[tamanoMatriz][tamanoMatriz];
	
	//Ingresar los datos de la matriz 1
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<"Ingrese el dato de la fila "<<i<<" y la columna "<<j<<" de la matriz UNO: "; cin>>matrizCuadrada1[i][j];
		}
	}
	cout<<endl;
	
	//Ingresar los datos de la matriz 2
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<"Ingrese el dato de la fila "<<i<<" y la columna "<<j<<" de la matriz DOS: "; cin>>matrizCuadrada2[i][j];
		}
	}
	cout<<endl;
	
	//Hacemos la suma de matrices
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<(matrizCuadrada1[i][j]+matrizCuadrada2[i][j])<<" ";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
