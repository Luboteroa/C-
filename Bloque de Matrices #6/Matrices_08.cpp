/* 8. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3 */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int tamanoMatriz;
	
	cout<<"Ingrese el tamano de la matriz cuadrada: "; cin>>tamanoMatriz;
	cout<<endl;
	
	int matrizCuadrada1[tamanoMatriz][tamanoMatriz], matrizCuadrada2[tamanoMatriz][tamanoMatriz];
	
	//Ingresar los datos de la matriz1
	cout<<"Matriz #1:"<<endl;
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<"Ingrese el dato de la fila "<<i<<" y la columna "<<j<<": "; cin>>matrizCuadrada1[i][j];
		}
	}
	cout<<endl;
	
	cout<<"Matriz #2:"<<endl;
	//Ingresar los datos de la matriz2
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<"Ingrese el dato de la fila "<<i<<" y la columna "<<j<<": "; cin>>matrizCuadrada2[i][j];
		}
	}
	cout<<endl;
	
	cout<<endl<<"La matriz #1 queda asi:"<<endl;
	//Mostrar las matrices
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<matrizCuadrada1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"La matriz #2 queda asi:"<<endl;
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<matrizCuadrada2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"Resultado"<<endl;
	int matrizMultiplicaciones[tamanoMatriz][tamanoMatriz];
	//Resultado multiplicación de ambas matrices dadas
	for(int i=0; i<tamanoMatriz; i++)
	{
		int resultadoMultiplicaciones = 0;
		for(int j=0; j<tamanoMatriz; j++)
		{			
			resultadoMultiplicaciones = matrizCuadrada1[i][0]*matrizCuadrada2[0][j]; 
			resultadoMultiplicaciones += matrizCuadrada1[i][1]*matrizCuadrada2[1][j];
			resultadoMultiplicaciones += matrizCuadrada1[i][2]*matrizCuadrada2[2][j];
			
			matrizMultiplicaciones[j][i] = resultadoMultiplicaciones;
			cout<<matrizMultiplicaciones[j][i]<<" ";
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
