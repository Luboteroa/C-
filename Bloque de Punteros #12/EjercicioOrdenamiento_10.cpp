/* 5. Pedir al usuario N n�meros, almacenarlos en un arreglo din�mico y posteriormente ordenar los n�meros en orden ascendente y mostrarlos en
pantalla. 
NOTA: Utilizar cualquier m�todo de ordenamiento. */

#include<iostream>
#include<conio.h>
#include<stdlib.h> //new and delete

using namespace std;

//Prototipo de funci�n
void PedirDatos();
void OrdenarArregloAscendente(int *, int);
void MostrarDatos(int *, int);

int nElementos, *elemento;

int main()
{
	PedirDatos();
	OrdenarArregloAscendente(elemento, nElementos);
	MostrarDatos(elemento, nElementos);
	
	delete[] elemento; //Liberar la memoria utilizada
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite el numero de elementos del arreglo: "; cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0; i<nElementos; i++)
	{
		cout<<"Digite el elemento ["<<i<<"]: "; cin>>*(elemento+i); //Esto �ltimo es lo mismo a poner elemento[i]
	}
}

void OrdenarArregloAscendente(int *elemento, int nElementos)
{
	int aux;
	
	//Ordenar Arreglo con el M�todo Burbuja (bubble sort)
	for(int i=0; i<nElementos; i++)
	{
		for(int j=0; j<nElementos-1; j++)
		{
			if(*(elemento+j) > *(elemento+j+1)) //Elemento[j] > Elemento[j+1]
			{
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void MostrarDatos(int *elemento, int nElementos)
{
	cout<<"\nMostrando Elementos:\n";
	for(int i=0; i<nElementos; i++)
	{
		cout<<"|"<<*(elemento+i)<<"|";
	}
	cout<<endl;
}
