/* 4. Crear una cadena que tenga la siguiente frase "Hola qu� tal", luego crear otra cadena para preguntarle al usuario su nombre, por �ltimo
a�adir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola qu� tal (nombre del usuario)". */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char saludo[] = "Hola que tal ";
	char nombre[20];
	
	cout<<"Digite su nombre: "; cin.getline(nombre, 20, '\n');
	
	strcat(saludo, nombre); //Queda guardado en la variable saludo
	cout<<saludo<<endl;
	
	getch();
	return 0;
}
