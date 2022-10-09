/* Árboles en C++
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *der;
	Nodo *izq;
};

//Prototipos funciones
Nodo *CrearNodo(int);
void InsertarNodo(Nodo *&, int);
void Menu();

Nodo *arbol = NULL;

int main()
{
	Menu();
	
	return 0;
}

//Función para crear un nuevo nodo
Nodo *CrearNodo(int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	
	return nuevo_nodo;
}

//Función para insertar  elementos en el árbol
void InsertarNodo(Nodo *&arbol, int n)
{
	if(arbol == NULL) //Si el árbol está vacío 
	{
		Nodo *nuevo_nodo = CrearNodo(n);
		arbol = nuevo_nodo;
		cout<<"\n\tEl dato "<<n<<" insertado en la lista correctamente.\n";
	}
	else //Si el árbol ya tiene un nodo o más
	{
		int valorRaiz = arbol->dato; //Obtenemos el valor de la raíz
		if(n<valorRaiz) //Si el elemento es menor que la raíz, insertar en el lado izquierdo
		{
			InsertarNodo(arbol->izq, n);
		}
		else //Si el elemento es mayor a la raíz, insertar en el lado derecho
		{
			InsertarNodo(arbol->der, n);
		}
	}
}

//Función del menú
void Menu()
{
	int opcion;
	float dato;
	const int opcionSalir = 0;
	
	do
	{
		cout<<"\t. :MENU: .\n\n";
		cout<<"1. Insertar nuevo nodo al arbol\n";
		cout<<"0. Salir\n";
		cout<<"\nOpcion: "; cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				cout<<"\nDigite un numero: "; cin>>dato;
				InsertarNodo(arbol, dato);
				cout<<endl;
				break;
				
			case opcionSalir:
				cout<<"\nSaliendo..."<<endl<<endl;
				
			default:
				cout<<"\nOpcion no valida, ingrese nuevamente."<<endl;
		}
		system("pause");
		system("cls");
	}while(opcion != opcionSalir);
}
