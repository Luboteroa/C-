/* 9. Realice un programa que lea una cadena de caracteres de la entrada estándar y muestre en la salida estándar cuántas ocurrencias
de cada vocal existen en la cadena */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
	char texto[20];
	int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;
	
	cout<<"Digite un texto: "; cin.getline(texto, 20, '\n');
	strlwr(texto);
	
	for(int i = 0; i<strlen(texto); i++)
	{
		switch(texto[i])
		{
			case 'a':
				vocal_a++;
				break;
				
			case 'e':
				vocal_e++;
				break;
			case 'i':
				vocal_i++;
				break;
			case 'o':
				vocal_o++;
				break;
			case 'u':
				vocal_u++;
				break;
		}
	}
	
	cout<<"El numero de veces que se repitio el caracter 'a' fue: "<<vocal_a<<endl;
	cout<<"El numero de veces que se repitio el caracter 'e' fue: "<<vocal_e<<endl;
	cout<<"El numero de veces que se repitio el caracter 'i' fue: "<<vocal_i<<endl;
	cout<<"El numero de veces que se repitio el caracter 'o' fue: "<<vocal_o<<endl;
	cout<<"El numero de veces que se repitio el caracter 'u' fue: "<<vocal_u<<endl;
	
	getch();
	return 0;
}
