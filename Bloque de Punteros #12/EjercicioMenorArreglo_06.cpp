/* Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del arreglo */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int n;
	int *dir_numeros, menor = 999999;
	
	cout<<"Digite el numero de elementos: "; cin>>n;
	
	int numeros[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Digite un numero ["<<i<<"]: "; cin>>numeros[i];
		if(numeros[i] < menor)
		{
			menor = numeros[i];
		}
	}
	
	cout<<endl;
	dir_numeros = &menor; //Posición de memoria del arreglo
	
	cout<<"El numero menor de los digitados fue: "<<*dir_numeros<<endl;
	cout<<"Posicion de memoria: "<<dir_numeros<<endl;
	
	getch();
	return 0;
}
