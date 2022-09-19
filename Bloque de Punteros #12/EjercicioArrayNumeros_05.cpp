/* 3. Rellenar un array de 10 números, posteriormente utilizando punteros 
indicar cuáles son números pares y su posición de memoria */

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[10], *dir_numeros;
	
	for(int i=0; i<10; i++)
	{
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	dir_numeros = numeros; //Posición de memoria de los números
	
	for(int i=0; i<10; i++)
	{
		if(*dir_numeros%2==0)
		{
			cout<<"El numero "<<*dir_numeros<<" es par"<<endl;
			cout<<"Posicion de memoria: "<<dir_numeros<<endl;
		}
		dir_numeros++;
	}	
	
	getch();
	return 0;
}
