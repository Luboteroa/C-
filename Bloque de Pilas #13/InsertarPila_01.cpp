/* Insertar elementos en una pila
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

void AgregarPila(Nodo *&, int); //Prototipo de función

int main()
{
	Nodo *pila = NULL;
	
	int n1, n2;
	cout<<"Inserte un numero: "; cin>>n1;
	AgregarPila(pila, n1);
	
	cout<<"Digite otro numero: "; cin>>n2;
	AgregarPila(pila, n2);
	
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
