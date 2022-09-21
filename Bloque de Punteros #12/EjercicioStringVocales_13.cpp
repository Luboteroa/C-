/*8. Pedir una cadena de caracteres (string) al usuario, e indicar cuántas veces aparece la vocal a, e, i, o, u; en la cadena de caracteres 
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

void PedirCadena();
void ContarVocales(char *);

char cadena[30];
int vA, vE, vI, vO, vU;

int main()
{
	PedirCadena();
	ContarVocales(cadena);
	
	cout<<"El numero de veces que aparecio la vocal a fue: "<<vA<<" veces."<<endl;
	cout<<"El numero de veces que aparecio la vocal e fue: "<<vE<<" veces."<<endl;
	cout<<"El numero de veces que aparecio la vocal i fue: "<<vI<<" veces."<<endl;
	cout<<"El numero de veces que aparecio la vocal o fue: "<<vO<<" veces."<<endl;
	cout<<"El numero de veces que aparecio la vocal u fue: "<<vU<<" veces."<<endl;
	
	getch();
	return 0;
}

void PedirCadena()
{
	cout<<"Digite un texto: "; cin.getline(cadena, 50, '\n');
	strlwr(cadena); //Pone el nombre en minusculas para poder buscarle las vocales
}

void ContarVocales(char *texto)
{
	while(*texto)
	{
		switch(*texto)
		{
			case 'a':
				vA++;
				break;
			
			case 'e':
				vE++;
				break;
			
			case 'i':
				vI++;
				break;
			
			case 'o':
				vO++;
				break;
			
			case 'u':
				vU++;
				break;
		}
		texto++;
	}
}

