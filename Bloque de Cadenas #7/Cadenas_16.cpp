//Transformar una cadena a números - Función ator() y atof()

//"123.45" -> 123.45 int

#include<iostream>
#include<conio.h>
#include<stdlib.h> //Para las funciones

using namespace std;

int main()
{
	char cad[] = "123";
	int numero;
	float numero2;
	
	numero = atoi(cad);
	
	cout<<numero<<endl;
	
	char cad2[] = "123.456";
	
	numero2 = atof(cad2);
	
	cout<<numero2<<endl;
	
	getch();
	return 0;
}
