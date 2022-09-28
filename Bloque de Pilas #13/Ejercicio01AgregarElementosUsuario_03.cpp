/* Ejercicio 1. Hacer un programa para agregar números enteros a una pila, hasta que el usuario lo dedida, después mostrar todos los números
introducidos en la pila
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

//Prototipo de función
void AgregarPila(Nodo *&, int);
void SacarPila(Nodo *&, int &);

int main()
{
	Nodo *pila = NULL;
	
	char quiereSeguir[] = "V";
	int dato;
	
	do
	{
		cout<<"Inserte un numero: "; cin>>dato;
		fflush(stdin);
		cout<<"Desea continuar? Escriba F para salir: "; cin.getline(quiereSeguir,20,'\n');
		strlwr(quiereSeguir);
		AgregarPila(pila, dato);
		
	}while(strcmp(quiereSeguir, "f")!=0);
	
	cout<<"\nElementos agregados a la pila:"<<endl;
	
	while(pila!=NULL)
	{
		SacarPila(pila, dato);
		if(pila != NULL)
		{
			cout<<dato<<" , ";
		}
		else
		{
			cout<<dato<<"."<<endl;
		}
	}
	
	getch();
	return 0;
}

void AgregarPila(Nodo *&pila, int n)
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\nElemento "<<n<<", agregado a PILA correctamente."<<endl;
}

void SacarPila(Nodo *&pila, int &n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
