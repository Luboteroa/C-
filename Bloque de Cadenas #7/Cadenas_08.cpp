//Añadir o concatenar una cadena con otra - Función strcat()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char cad1[] = "Esto es una cadena";
	char cad2[] = " de ejemplo";
	
	cout<<strcat(cad1, cad2)<<endl;
	
	getch();
	return 0;
}
