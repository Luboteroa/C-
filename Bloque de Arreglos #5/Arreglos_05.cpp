/* 5. Desarrolle un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector */

#include<iostream>
#include<conio.h>
#include<math.h>
#include<limits> //for set inf limit

using namespace std;

int main()
{
	int tamanoVector, inf;
	
	inf = -INFINITY;
	
	cout<<"Digite el tamano del arreglo: "; cin>>tamanoVector;
	int numeros[tamanoVector];
	
	for(int i = 0; i<tamanoVector; i++)
	{
		cout<<"Digite el numero en la posicion "<<(i+1)<<": "; cin>>numeros[i];
		if(numeros[i]>inf)
		{
			inf = numeros[i];
		}
	}
	
	cout<<"El numero mas grande en el vector fue: "<<inf<<endl;
	
	getch();
	return 0;
}
