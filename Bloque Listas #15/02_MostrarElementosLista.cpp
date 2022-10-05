/* Mostrar los elementos de la lista
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;	
};

//Prototipo de funciones
void InsertarLista(Nodo *&, int);
void MostrarLista(Nodo *);
void Menu();

Nodo *lista = NULL;

int main()
{
	Menu();

	return 0;
}

void InsertarLista(Nodo *&lista, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < n))
	{
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista ==	aux1)
	{
		lista = nuevo_nodo;
	}
	else
	{
		aux2->siguiente = nuevo_nodo;
	}	
	
	nuevo_nodo->siguiente = aux1;
	cout<<"\tElemento "<<n<<" insertado a la lista correctamente."<<endl;
}

void MostrarLista(Nodo *lista)
{
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL)
	{
		if(actual->siguiente == NULL)
		{
			cout<<actual->dato<<"."<<endl;
		}
		else
		{
			cout<<actual->dato<<" -> ";	
		}
		actual = actual->siguiente;
	}
}

void Menu()
{
	int opcion, dato;
	
	do
	{
		cout<<"\t. :MENU: .\n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar los elementos de la lista\n";
		cout<<"3. Salir\n";
		cout<<"Opcion: "; cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				cout<<"\nDigite un numero: "; cin>>dato;
				InsertarLista(lista, dato);
				cout<<endl;
				break;
				
			case 2:
				MostrarLista(lista);
				cout<<endl;
				break;
			case 3:
				cout<<"Saliendo..."<<endl<<endl;
				break;
			default:
				cout<<"Opcion no valida, ingrese nuevamente."<<endl;
		}
		system("pause");
		system("cls");
	}while(opcion != 3);
}

