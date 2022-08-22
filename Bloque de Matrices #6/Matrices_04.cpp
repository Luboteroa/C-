/* 4. Hacer una matriz preguntando al usuario el n�mero de filas y columnas, llenarla de n�meros aleatorios, copiar el contenido a otra matriz
y por �ltimo mostrarla en pantalla. */

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int tamanoMatriz;
	
	cout<<"Digite el tamano de la matriz: "; cin>>tamanoMatriz;
	int matrizCuadrada[tamanoMatriz][tamanoMatriz], copiaMatriz[tamanoMatriz][tamanoMatriz];
	
	//Pedir datos
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{	
			matrizCuadrada[i][j] = rand()%101;	
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
	
	//Mostrar matriz copia
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<copiaMatriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
