/* 5. Hacer un programa que determine si una palabra es políndroma */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char texto[30], copia[30];
	
	cout<<"Digite un texto: "; cin.getline(texto, 30, '\n');
	
	strcpy(copia, texto);
	strrev(copia);
	
	if(strcmp(copia, texto)==0)
	{
		cout<<"Es un palindromo"<<endl;
		getch();
		return 0;
	}
	
	cout<<"No es un palindromo"<<endl;
	getch();
	return 0;
}
