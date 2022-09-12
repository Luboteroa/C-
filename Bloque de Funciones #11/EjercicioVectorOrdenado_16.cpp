/* Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado crecientemente. Sugerencia:
compruebe que todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que el elemento que le precede en 
el vector */

#include<iostream>
#include<conio.h>

using namespace std;

bool ComprobarOrden(int numeros[], int size);

int main()
{
	int numeros[] = {1,2,3,4,5};
	int numerosDesordenados[] = {2,3,5,6,1};
	
	int size = 5;
	
	//bool comp = ComprobarOrden(numeros, size);
	bool comp = ComprobarOrden(numerosDesordenados, size);
	
	if(comp==true)
	{
		cout<<"Si esta ordenado ascendentemente.";
		getch();
		return 0;
	}
	
	cout<<"No esta ordenado descendentemente.";
	getch();
	return 0;
}

bool ComprobarOrden(int numeros[], int size)
{
	int numeroActual = numeros[0];
	bool comp = true;
	
	for(int i=0; i<size; i++)
	{
		if(numeroActual>numeros[i])
		{
			comp = false;
		}
	}
	
	return comp;
}
