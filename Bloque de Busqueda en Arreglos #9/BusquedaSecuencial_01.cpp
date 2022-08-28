//Busqueda secuencial

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int arreglo[] = {3,4,2,1,5};
	int i, dato;
	char band = 'F';
	
	//Búsqueda Secuencial
	dato = 1;
	i = 0;
	while((band == 'F') && (i<5))
	{
		if(arreglo[i] == dato)
		{
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F')
	{
		cout<<"El dato no existe en el arreglo"<<endl;
		getch();
		return 0;
	}
	
	cout<<"El numero fue encontrado en la posicion: "<<i-1<<endl;
	getch();
	return 0;
}
