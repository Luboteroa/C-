/* Paso de parámetro tipo vector 

Parámetros de la función:
	void NombreDeFuncion(tipo nombreArreglo[], int tamanoArreglo)
	
Llamada a la funcion:
	NombreDeFuncion(nombreArreglo, tamañoArreglo)
	
*/

//Cuadrados de los elementos del vector

#include<iostream>
#include<conio.h>

using namespace std;

void Cuadrado(int vec[], int tamano);
void Muestra(int vec[], int tamano);

int main()
{
	const int TAM = 5;
	int vec[TAM] = {1,2,3,4,5};
	
	Cuadrado(vec, TAM);
	Muestra(vec, TAM);
	
	getch();
	return 0;
}

void Cuadrado(int vec[], int tamano)
{
	for(int i=0; i<tamano; i++)
	{
		vec[i] *= vec[i]; 
	}
}

void Muestra(int vec[], int tamano)
{
	for(int i=0; i<tamano; i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}
