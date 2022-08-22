/* 5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella en la que la columna i era la 
fila i de la matriz */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int tamanoMatriz;
	
	cout<<"Digite el tamano de la matriz: "; cin>>tamanoMatriz;
	int matrizCuadrada[tamanoMatriz][tamanoMatriz], copiaMatriz[tamanoMatriz][tamanoMatriz];
	
	//Pedir datos
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<"Digite el numero de la fila "<<i<<" y columna "<<j<<": "; cin>>matrizCuadrada[i][j];	
		}
	}
	cout<<endl;
	
	//Hacer copia
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			copiaMatriz[i][j] = matrizCuadrada[i][j];
		}
	}
	
	//Sacamos la traspuesta
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			matrizCuadrada[i][j] = copiaMatriz[j][i];
			cout<<matrizCuadrada[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
