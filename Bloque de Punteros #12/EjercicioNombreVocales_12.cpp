//Pedir su nombre al usuario y devolver el número de vocales que hay. NOTA: Recuerda que debes utilizar punteros

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

char nombre[30];

void PedirNombre();
int BuscarVocales(char *);

int main()
{
	PedirNombre();
	int numVocales = BuscarVocales(nombre);
	
	cout<<"El numero de vocales en su nombre es: "<<numVocales<<endl;
	
	getch();
	return 0;
}

void PedirNombre()
{
	cout<<"Digite su nombre: "; cin.getline(nombre, 30, '\n');
	strlwr(nombre); //Pone el nombre en minusculas para poder buscarle las vocales
}

int BuscarVocales(char *nombre)
{
	int numVocales = 0;
	while(*nombre) //Mientras nombre no sea null
	{
		switch(*nombre)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':	
			case 'u':
				numVocales++;
		}
		nombre++;
	}
	return numVocales;
}
