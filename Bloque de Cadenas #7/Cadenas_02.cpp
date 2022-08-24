//Longitud de una cadena de caracteres - Función strlen()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra[] = "Hola, qué tal?";
	int longitud = 0;
	
	longitud = strlen(palabra);
	
	cout<<"La longitud de la cadena es: "<<longitud<<endl;
	
	getch();
	return 0;
}
