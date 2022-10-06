/* Ejercicio 1: Crear una lista que almacene "n" números enteros y calcular el menor y mayor de ellos
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo
{
	float dato;
	Nodo *siguiente;	
};

//Prototipo de funciones
void InsertarLista(Nodo *&, float);
void MostrarLista(Nodo *);
void BuscarLista(Nodo *, float);
void EliminarNodo(Nodo *&, float);
void EliminarLista(Nodo *&, float &);
void CalcularMayorOMenor(Nodo *);
void PromedioNumeros(Nodo *);

void Menu();

Nodo *lista = NULL;

int main()
{
	Menu();

	return 0;
}

void InsertarLista(Nodo *&lista, float n)
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

void BuscarLista(Nodo *lista, float n)
{
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual != NULL) && (actual->dato <= n))
	{
		if(actual->dato == n)
		{
			band = true;
		}
		actual = actual->siguiente;
	}
	
	if(band == true)
	{
		cout<<"\nElemento "<<n<<" SI ha sido encontrado en la lista."<<endl;
		return;
	}
	cout<<"\nElemento "<<n<<" NO ha sido encontrado en la lista."<<endl;
}

void EliminarNodo(Nodo *&lista, float n)
{
	if(lista == NULL){ return; }
	
	Nodo *aux_borrar;
	Nodo *anterior = NULL;
	aux_borrar = lista;
	
	while((aux_borrar != NULL) && (aux_borrar->dato != n))
	{
		anterior = aux_borrar;
		aux_borrar = aux_borrar->siguiente;
	}
	
	if(aux_borrar == NULL)
	{
		cout<<"\tEl elemento no existe.\n"<<endl;
	}
	else if(anterior == NULL)
	{
		lista = lista->siguiente;
		delete aux_borrar;
		cout<<"\tElemento "<<n<<" eliminado correctamente.\n";
	}
	else
	{
		anterior->siguiente = aux_borrar->siguiente;
		delete aux_borrar;
		cout<<"\tElemento "<<n<<" eliminado correctamente.\n";
	}
}

void EliminarLista(Nodo *&lista, float &n)
{
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}

void CalcularMayorOMenor(Nodo *lista)
{
	if(lista == NULL)
	{
		cout<<"Lista vacia, por favor inserte datos nuevos.\n";
		return;
	}
	float mayor = -999999, menor = mayor*-1;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL)
	{
		if(actual->dato > mayor)
		{
			mayor = actual->dato;
		}
		if(actual->dato < menor)
		{
			menor = actual->dato;
		}
		actual = actual->siguiente;
	}
	
	cout<<"El elemento MENOR de la lista es: "<<menor<<". Y el elemento MAYOR es: "<<mayor<<".\n\n";
}

void PromedioNumeros(Nodo *)
{
	float promedio = 0, n=0;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL)
	{
		n++;
		promedio += actual->dato;
		actual = actual->siguiente;
	}
	promedio /= n;
	
	cout<<"El promedio de los numeros en la lista fue: "<<promedio<<endl<<endl;
}

void Menu()
{
	int opcion;
	float dato;
	const int opcionSalir = 0;
	
	do
	{
		cout<<"\t. :MENU: .\n\n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar los elementos de la lista\n";
		cout<<"3. Buscar numero lista\n";
		cout<<"4. Eliminar elemento de una lista\n";
		cout<<"5. Eliminar lista\n";
		cout<<"6. Calcular numero mayor y menor de la lista\n";
		cout<<"7. Sacar promedio de los numeros de la lista\n";
		cout<<"0. Salir\n";
		cout<<"\nOpcion: "; cin>>opcion;
		
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
				cout<<"\nDigite el numero a buscar: "; cin>>dato;
				BuscarLista(lista, dato);
				break;
				
			case 4:
				cout<<"\nDigite el numero que desea eliminar de la lista: "; cin>>dato;
				EliminarNodo(lista, dato);
				break;
			
			case 5:
				cout<<"\nEliminando datos de la lista...\n";
				if(lista == NULL)
				{
					cout<<"Lista vacia, ingrese datos.\n\n";
					break;
				} 
				
				while(lista != NULL)
				{
					EliminarLista(lista, dato);
					if(lista == NULL)
					{
						cout<<dato<<".\n\n";
						break;
					}
					cout<<dato<<" -> ";
				}
				break;
				
			case 6:
				CalcularMayorOMenor(lista);
				break;
				
			case 7:
				PromedioNumeros(lista);
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
