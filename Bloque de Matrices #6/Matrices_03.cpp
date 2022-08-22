/* 3. Hacer una matriz de tipo entero de 2x2, llenarla de números y luego copiar todo su contenido hacia otra matriz */

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
	
	//Mostrar matriz copia
	for(int i=0; i<tamanoMatriz; i++)
	{
		for(int j=0; j<tamanoMatriz; j++)
		{
			cout<<copiaMatriz[i][j];
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
