/* Ejercicio 2. Hacer un programa en C++ utilizando pilas que contenga el siguiente menu:

1. Insertar un caracter a la pila
2. Mostrar todos los elementos de la pila
3. Salir
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo
{
	char dato;
	Nodo *siguiente;	
};

//Prototipo de función
void AgregarPila(Nodo *&, char);
void SacarPila(Nodo *&, char &);

int main()
{
	Nodo *pila = NULL;
	char caracter;
	
	cout<<"Digite un caracter: "; cin>>caracter;
	AgregarPila(pila, caracter);
	
	cout<<"Digite otro caracter: "; cin>>caracter;
	AgregarPila(pila, caracter);
	
	while(pila != NULL)
	{
		SacarPila(pila, caracter);
		if(pila != NULL)
		{
			cout<<caracter<<" , ";
		}
		else
		{
			cout<<caracter<<"."<<endl;
		}
	}
	
	getch();
	return 0;
}

void AgregarPila(Nodo *&pila, char n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\nElemento "<<n<<", agregado a PILA correctamente."<<endl;
}

void SacarPila(Nodo *&pila, char &n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
