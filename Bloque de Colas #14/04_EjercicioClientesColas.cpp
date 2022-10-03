/* Ejercicio 2. Hacer un programa que guarde datos de clientes de un banco, los almacene en una cola, y por último muestre los clientes en
el orden correcto.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Cliente
{
	char nombre[30];
	char clave[10];
	int edad;
};


struct Nodo
{
	Cliente cliente;
	Nodo *siguiente;	
};

void InsertarCola(Nodo *&, Nodo *&, Cliente);
void SuprimirCola(Nodo *&, Nodo *&, Cliente &);
bool Cola_Vacia(Nodo *);

int main()
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente cliente;
	int opcion = 0;
	
	do
	{
		system("cls");
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"1. Insertar nuevo cliente"<<endl;
		cout<<"2. Salir"<<endl;
		cout<<"\nOpcion: "; cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				fflush(stdin);
				cout<<"\nIngrese nombre del cliente: "; cin.getline(cliente.nombre, 30, '\n');
				cout<<"Ingrese la clave: "; cin.getline(cliente.clave, 10, '\n');
				cout<<"Ingrese la edad: "; cin>>cliente.edad;
				
				InsertarCola(frente, fin, cliente);
				
				system("pause");
				break;
				
			case 2:
				break;
				
			default:
				cout<<"Opcion no valida, su opcion nuevamente."<<endl;
				system("pause");
		}
	}while(opcion != 2);
	
	//Suprimiendo datos
	while(frente != NULL)
	{
		SuprimirCola(frente, fin, cliente);
		
		if(frente != NULL)
		{
			cout<<"--------------------"<<endl;
			cout<<"Nombre: "<<cliente.nombre<<endl;
			cout<<"Clave: "<<cliente.clave<<endl;
			cout<<"Edad: "<<cliente.edad<<endl;
		}
		else
		{
			cout<<"--------------------"<<endl;
			cout<<"Ultimo cliente en la cola:"<<endl;
			cout<<"Nombre: "<<cliente.nombre<<endl;
			cout<<"Clave: "<<cliente.clave<<endl;
			cout<<"Edad: "<<cliente.edad<<endl;
			cout<<endl<<"Fin."<<endl;
		}
	}
	
	getch();
	return 0;
}

void InsertarCola(Nodo *&frente, Nodo *&fin, Cliente cliente)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->cliente = cliente;
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
	cout<<"\n	Cliente "<<cliente.nombre<<" insertado a cola correctamente."<<endl<<endl;	
}

void SuprimirCola(Nodo *&frente, Nodo *&fin, Cliente &cliente)
{
	cliente = frente->cliente;
	
	Nodo *aux = frente;
	
	if(frente == NULL)
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
