/* 6. Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función buscar un número en particular.
NOTA: Puedes utilizar cualquier método de búsqueda (secuencial o binaria) */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de función
void PedirDatos();
void EncontrarElementoBinario(int *, int, int);

int nElementos, *elemento;

int main()
{
	PedirDatos();
	EncontrarElementoBinario(elemento, nElementos, 9);
	
	delete[] elemento;
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite el numero de elementos del arreglo: "; cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0; i<nElementos; i++)
	{
		cout<<"Digite el elemento ["<<i<<"]: "; cin>>*(elemento+i); //Esto último es lo mismo a poner elemento[i]
	}
}

void EncontrarElementoBinario(int *elemento, int nElementos, int dato)
{
	int inf = 0, sup = nElementos, mitad = (inf+sup)/2;
	char band = 'F';
	while(inf<=sup)
	{	
		if(*(elemento+mitad) == dato)
		{
			band = 'V';
			break;
		}
		
		else if(*(elemento+mitad)>dato)
		{
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		
		else if(*(elemento+mitad)<dato)
		{
			inf = mitad;
			mitad = (inf + sup)/2;
		}
	}
	
	if(band == 'V')
	{
		cout<<"\nEl numero ha sido encontrado en la posicion: "<<mitad;
	}
	else
	{
		cout<<"\nEL NUMERO NO HA SIDO ENCONTRADO";
	}
	cout<<endl;
}
