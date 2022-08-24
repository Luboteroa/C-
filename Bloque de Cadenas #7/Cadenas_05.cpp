/* 2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
	char texto[30], copiaTexto[30];
	
	cout<<"Digite un texto: ";
	cin.getline(texto, 30, '\n');
	
	strcpy(copiaTexto, texto);
	
	cout<<"El texto que copio fue: "<<copiaTexto<<endl;
	
	system("pause");
	return 0;
}
