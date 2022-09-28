//Quitar elementos de una pila

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

void AgregarPila(Nodo *&, int); //Prototipo de función
void SacarPila(Nodo  *&, int &);

int main()
{
	Nodo *pila = NULL;
	
	int dato;
	cout<<"Inserte un numero: "; cin>>dato;
	AgregarPila(pila, dato);
	
	cout<<"Digite otro numero: "; cin>>dato;
	AgregarPila(pila, dato);
	
	cout<<"\nSacando elementos de la pila:"<<endl;
	while(pila != NULL) //mientras no sea el final de la pila 
	{
		SacarPila(pila, dato);
		if(pila != NULL)
		{
			cout<<dato<<" , ";
		}
		else
		{
			cout<<dato<<"."; 
		}
	}
	
	getch();
	return 0;
}

void AgregarPila(Nodo *&pila, int n)
{
	Nodo *nuevo_nodo = new Nodo(); //Reserva memoria para el nuevo elemento
	nuevo_nodo->dato = n; //Inserta el nuevo elemento
	nuevo_nodo->siguiente = pila; //Pone la pila anterior como el elemento que le sigue a este
	pila = nuevo_nodo; //Este nos refiere a que esta es la cola de la pila
	
	cout<<"\nElemento "<<n<<", agregado a PILA correctamente."<<endl;
}

void SacarPila(Nodo *&pila, int &n)
{
	Nodo *aux = pila; //Crea un auxiliar
	n = aux->dato;  //Reorganiza el dato 
	pila = aux->siguiente; //La pila apunta al elemento siguiente
	delete aux; //Se elimina el espacio de memoria
}
