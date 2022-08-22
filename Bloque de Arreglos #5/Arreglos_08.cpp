/* 8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int size; 
	
	cout<<"Introduzca el numero de numeros que desea introducir: "; cin>>size;
	
	int arregloUno[size], arregloDos[size];
	
	for(int i = 0; i<size; i++)
	{
		cout<<"Introduzca el numero en la posición "<<(i+1)<<": "; cin>>arregloUno[i]; 
		
		arregloDos[i] = arregloUno[i] * 2;
	}
	
	cout<<"El arreglo dos es: ";
	for(int i = 0; i<size; i++)
	{
		cout<<arregloDos[i]<<", ";
	}
	
	getch();
	return 0;
}
