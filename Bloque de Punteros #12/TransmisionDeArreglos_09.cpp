/* Transmisión de arreglos

Ejemplo: Hallar el máximo elementos de un arreglo
*/

#include<iostream>
#include<conio.h>

using namespace std;

int HallarMax(int *, int); //Prototipo de función

int main()
{
	const int nElementos = 5;
	int numeros[nElementos] = {3,5,2,8,1};
	
	int maximo = HallarMax(numeros, nElementos);
	
	//Enviar el vactor numeros como elemento de un puntero es igual a enviar &numeros[0]!!
	
	cout<<"Maximo: "<<maximo<<endl;
	
	getch();
	return 0;
}

int HallarMax(int *dirVec, int nElementos)
{
	int max = -99999999;
	
	for(int i=0; i<nElementos; i++)
	{
		if(*(dirVec+i)>max)
		{
			max = *(dirVec+i);
		}	
	}
	
	return max;
}
