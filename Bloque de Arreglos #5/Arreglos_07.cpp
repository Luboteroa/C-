/* 7. Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector,
situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido del
nuevo vector en la salida estándar. */

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
	int tamanoUno, tamanoDos;
	
	cout<<"Digite el tamano del arreglo #1: "; cin>>tamanoUno;
	cout<<"Digite el tamano del arreglo #2: "; cin>>tamanoDos;
	
	char caracteresUno[tamanoUno], caracteresDos[tamanoDos];
	
	for(int i=0; i<tamanoUno; i++)
	{
		cout<<"Digite el caracter del primer arreglo en la posicion "<<(i+1)<<": "; cin>>caracteresUno[i];
	}
	
	for(int i=0; i<tamanoDos; i++)
	{
		cout<<"Digite el caracter del segundo arreglo en la posicion "<<(i+1)<<": "; cin>>caracteresDos[i];
	}
	
	char caracteresTotal[tamanoUno + tamanoDos];
	
	for(int i = 0; i<tamanoUno; i++)
	{
		caracteresTotal[i] = caracteresUno[i];
	}
	
	for(int i=0; i<(tamanoUno + tamanoDos); i++)
	{
		caracteresTotal[i+tamanoUno] = caracteresDos[i];
	}
	
	//Demasiados FOR MAY
	for(int i=0; i<(tamanoUno+tamanoDos); i++)
	{
		cout<<"Caracteres total, posicion "<<(i+1)<<": "<<caracteresTotal[i]<<endl;
	}
	
	system("pause");
	return 0;
}
