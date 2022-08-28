//Ordenamiento por Quick Sort

#include<iostream>
#include<conio.h>

using namespace std;

void Intercambio(float &x, float &y)
{
	float aux;
	
	aux = x;
	x = y;
	y = aux;
}

void QuickSort(float arreglo[], int primero, int ultimo)
{
	int i,j, central;
	float pivote;
	
	central = (primero + ultimo)/2;
	pivote = arreglo[central];
	i = primero;
	j = ultimo;
	
	do
	{
		while(arreglo[i]<pivote) i++;
		while(arreglo[j]>pivote) j--;
		
		if(i<=j)
		{
			Intercambio(arreglo[i], arreglo[j]);
			i++; j--;
		}
	}while(i<=j);
	
	if(primero<j)
	{
		QuickSort(arreglo, primero, j); //Ordenar la sublista izquierda
	}
	if(i<ultimo)
	{
		QuickSort(arreglo, i, ultimo); //Ordenar sublista derecha
	}
}

int main()
{
	float arreglo[] = {2,23,54,2,21,564,32,45,656,23,76,45,23,11,10,9,11,76,34,65,28,110};
	
	QuickSort(arreglo,0, 21);
	
	cout<<"Orden ascendente: "<<endl;
	for(int i = 0; i<22; i++)
	{
		cout<<arreglo[i]<<"|";
	}
	cout<<endl;
	
	cout<<"Orden descentende: "<<endl;
	for(int i = 21; i>=0; i--)
	{
		cout<<arreglo[i]<<"|";
	}
	cout<<endl;
	
	
	getch();
	return 0;
}
