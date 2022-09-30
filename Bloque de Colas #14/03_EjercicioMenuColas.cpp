/* Ejercicio 1. Hacer un programa en C++, utilizando colas que contenga el siguiente menú:

	1. Insertar un caracter a una cola.
	2. Mostrar todos los elementos de la cola
	3. Salir
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

//Prototipos de función
void InsertarCola(Nodo *&, Nodo *&, int);
void SuprimirCola(Nodo *&, Nodo *&, int &);
bool Cola_Vacia(Nodo *);

int main()
{
	int opcion = 0, dato;
	Nodo *frente = NULL, *fin = NULL;
	do
	{
		system("cls");
		cout<<"MENU PRINCIPAL"<<endl<<"1. Insertar un numero"<<"\n2. Mostrar todos los numeros"<<"\n3. Salir\n"<<"\nOPCION: "; cin>>opcion;
		switch(opcion)
		{
			case 1:
				cout<<"Digite un numero: "; cin>>dato;
				InsertarCola(frente, fin, dato);
				system("pause");
				break;
				
			case 2:
				//Eliminar los elementos de la cola
				cout<<"Quitando elementos de la cola:"<<endl;
				while(frente != NULL)
				{
					SuprimirCola(frente, fin, dato);
					
					if(frente != NULL)
					{
						cout<<dato<<" , ";
					}
					else
					{
						cout<<dato<<"."<<endl;
					}
				}
				system("pause");
				break;
				
			case 3:
				break;
				
			default:
				cout<<"Opcion no valida, favor reintentar."<<endl;
				system("pause");
				break;
		}
	}while(opcion != 3);
	cout<<"Saliendo..."<<endl;
	
	getch();
	return 0;
}

void InsertarCola(Nodo *&frente, Nodo *&fin, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(Cola_Vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	cout<<"\n	Elemento "<<n<<" insertado a cola correctamente."<<endl<<endl;
}

void SuprimirCola(Nodo *&frente, Nodo *&fin, int &n)
{
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente->siguiente;	
	}
	delete aux;
}

bool Cola_Vacia(Nodo *frente)
{
	return (frente == NULL)? true : false;
}
