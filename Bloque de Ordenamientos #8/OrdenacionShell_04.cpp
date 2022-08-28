//Ordenamiento por sheLL

#include<iostream>
#include<conio.h>

using namespace std;

void Intercambio(float &x, float &y)
{
	float aux;
	
	aux = x;
	x = y ;
	y = aux;
}

void OrdenacionShell(float array[], int lenght)
{
	int salto, i,j,k;
	salto = lenght/2;
	
	while(salto>0)
	{
		for(i=salto; i<lenght; i++)
		{
			j = i - salto;
			while(j>=0)
			{
				k = j + salto;
				if(array[j] <= array[k]) //Par de elementos están ordenados
				{
					j = -1;
				}
				else //Par de elementos están desordenados
				{
					Intercambio(array[j], array[k]);
					j -= salto;
				}
			}
		}
		salto = salto/2;
	}
}

int main()
{
	float arreglo[] = {4,6,1,9,5,10,2,11,19,7};
	
	OrdenacionShell(arreglo, 10);
	
	cout<<"Orden ascendente: "<<endl;
	for(int i = 0; i<10; i++)
	{
		cout<<arreglo[i]<<"|";
	}
	cout<<endl;
	
	cout<<"Orden descentende: "<<endl;
	for(int i = 9; i>=0; i--)
	{
		cout<<arreglo[i]<<"|";
	}
	cout<<endl;
	
	getch();
	return 0;
}


