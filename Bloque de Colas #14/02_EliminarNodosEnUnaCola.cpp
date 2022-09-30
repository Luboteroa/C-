/* eliminar elementos de una cola
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
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Digite un numero: "; cin>>dato;
	InsertarCola(frente, fin, dato);
	
	cout<<"Digite otro numero: "; cin>>dato;
	InsertarCola(frente, fin, dato);
	
	cout<<"Digite otro numero: "; cin>>dato;
	InsertarCola(frente, fin, dato);
	
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
	
	getch();
	return 0;
}

//Función insertar elementos en una cola
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

//Función para determinar si la cola está vacía o no
bool Cola_Vacia(Nodo *frente)
{
	return (frente==NULL)? true : false;
	
	/*if(frente == NULL)
	{
		return true;
	}
	return false;*/
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
