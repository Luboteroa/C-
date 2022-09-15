/* Escriba una función EscribeNumeros(int ini, int fin) que devuelva en la salida estándar los números del ini a fin. Escriba una versión
que escriba los números en orden ascendente */

#include<iostream>
#include<conio.h>

using namespace std;

void EscribeNumeros(int ini, int fin);

int ini, fin;

int main()
{
	do
	{
		cout<<"Digite el inicio: "; cin>>ini;
		cout<<"Digite el final: "; cin>>fin;
	}while(ini>fin);
	
	EscribeNumeros(ini, fin);
	
	getch();
	return 0;
}

void EscribeNumeros(int ini, int fin)
{
	if(ini==fin) {cout<<"|"<<ini<<"|"; return;}
	cout<<"|"<<ini;
	EscribeNumeros(ini+1, fin);
}
