/* Eliminar nodos de un árbol
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
	Nodo *padre;
};

//Prototipos funciones
Nodo *CrearNodo(int, Nodo *);
void InsertarNodo(Nodo *&, int, Nodo *);
void MostrarArbol(Nodo *, int);
bool Busqueda(Nodo *, int);
void PreOrden(Nodo *);
void InOrden(Nodo *);
void PostOrden(Nodo *);
void Eliminar(Nodo *, int);

void EliminarNodo(Nodo *);
Nodo *Minimo(Nodo *);
void Reemplazar(Nodo *, Nodo *); 
void DestruirNodo(Nodo *);

void Menu();

Nodo *arbol = NULL;

int main()
{
	Menu();
	
	return 0;
}

//Función para crear un nuevo nodo
Nodo *CrearNodo(int n, Nodo *padre)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

//Función para insertar  elementos en el árbol
void InsertarNodo(Nodo *&arbol, int n, Nodo *padre)
{
	if(arbol == NULL) //Si el árbol está vacío 
	{
		Nodo *nuevo_nodo = CrearNodo(n, padre);
		arbol = nuevo_nodo;
		cout<<"\n\tEl dato "<<n<<" insertado en la lista correctamente.\n";
	}
	else //Si el árbol ya tiene un nodo o más
	{
		int valorRaiz = arbol->dato; //Obtenemos el valor de la raíz
		if(n<valorRaiz) //Si el elemento es menor que la raíz, insertar en el lado izquierdo
		{
			InsertarNodo(arbol->izq, n, arbol);
		}
		else //Si el elemento es mayor a la raíz, insertar en el lado derecho
		{
			InsertarNodo(arbol->der, n, arbol);
		}
	}
}

void MostrarArbol(Nodo *arbol, int cont)
{
	if(arbol == NULL) { return; }
	
	MostrarArbol(arbol->der, cont+1);
	
	for(int i=0; i<cont; i++)
	{
		cout<<"   ";
	}
	cout<<arbol->dato<<endl;
	
	MostrarArbol(arbol->izq, cont+1);
}

//Recorrido en profundidad - PreOrden
void PreOrden(Nodo *arbol)
{
	if(arbol == NULL){ return; }
	
	cout<<arbol->dato<<" - ";
	PreOrden(arbol->izq);
	PreOrden(arbol->der);
}

void InOrden(Nodo *arbol)
{
	if(arbol == NULL) { return; }
	
	InOrden(arbol->izq);
	cout<<arbol->dato<<" - ";
	InOrden(arbol->der);
}

void PostOrden(Nodo *arbol)
{
	if(arbol == NULL) { return; }
	
	PostOrden(arbol->izq);
	PostOrden(arbol->der);
	cout<<arbol->dato<<" - ";
}

bool Busqueda(Nodo *arbol, int n)
{
	if(arbol == NULL) {return false;}
	
	if(arbol->dato == n)
	{
		return true;
	}
	
	else if(n < arbol->dato)
	{
		return Busqueda(arbol->izq, n);
	}
	else
	{
		return Busqueda(arbol->der, n);
	}
}

//Eliminar un nodo del árbol
void Eliminar(Nodo *arbol, int n)
{
	if(arbol == NULL) { return; }
	
	if(n < arbol->dato)
	{
		Eliminar(arbol->izq, n); //Si el valor es menor, busca por la derecha
	}
	else if(n >  arbol->dato)
	{
		Eliminar(arbol->der, n); //Si el valor es mayor, busca por la derecha
	}
	else
	{
		EliminarNodo(arbol);
	}
}

//Función para eliminar nodo encontrado
void EliminarNodo(Nodo *nodoEliminar)
{
	if(nodoEliminar->izq && nodoEliminar->der) //Aquí se pregunta si el nodo tiene hijo izquierdo e hijo derecho
	{
		Nodo *menor = Minimo(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		EliminarNodo(menor);
	}
	else if(nodoEliminar->izq) //Aqui se pregunta si el nodo tiene hijo izquierdo O hijo derecho
	{
		Reemplazar(nodoEliminar, nodoEliminar->izq);
		DestruirNodo(nodoEliminar);
	}
	else if(nodoEliminar->der)
	{
		Reemplazar(nodoEliminar, nodoEliminar->der);
		DestruirNodo(nodoEliminar);
	}
	else //Nodo no tiene hijos --NODO HOJA
	{
		Reemplazar(nodoEliminar, NULL);
		DestruirNodo(nodoEliminar);
	}
}

//Función para determinar el nodo más izquierdo posible
Nodo *Minimo(Nodo *arbol)
{
	if(arbol == NULL) { return NULL; }
	
	if(arbol->izq) //Si tiene hijo izquierdo, sigue por la izquierda
	{
		return Minimo(arbol->izq);
	}
	else
	{
		return arbol; //Retornamos el mismo nodo
	}
}

//Función para reemplazar el nodo
void Reemplazar(Nodo *arbol, Nodo *nuevoNodo)
{
	if(arbol->padre)
	{
		//arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato)
		{
			arbol->padre->izq = nuevoNodo;
		}
		else if(arbol->dato == arbol->padre->der->dato)
		{
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo)
	{
		//Procedemos a asignarle su nuevo padre
		nuevoNodo->padre = arbol->padre;
	}
}

//Función para destruir un nodo
void DestruirNodo(Nodo *nodo)
{
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}

//Función del menú
void Menu()
{
	int opcion;
	float dato;
	bool buscar;
	const int opcionSalir = 0;
	
	do
	{
		cout<<"\t. :MENU: .\n\n";
		cout<<"1. Insertar nuevo nodo al arbol\n";
		cout<<"2. Mostrar arbol\n";
		cout<<"3. Buscar numero en el arbol\n";
		cout<<"4. Recorrer el arbol en PreOrden\n";
		cout<<"5. Recorrer el arbol en InOrden\n";
		cout<<"6. Recorrer el arbol en PostOrden\n";
		cout<<"7. Eliminar un elemento del arbol\n";
		cout<<"0. Salir\n";
		cout<<"\nOpcion: "; cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				cout<<"\nDigite un numero: "; cin>>dato;
				InsertarNodo(arbol, dato, NULL);
				cout<<endl;
				break;
				
			case 2:
				cout<<"\nMostrando arbol...\n\n";
				MostrarArbol(arbol, 0);
				cout<<endl;
				break;
				
			case 3:
				cout<<"\nElemento a buscar en el arbol: "; cin>>dato;
				buscar = Busqueda(arbol, dato);
				if(buscar == true)
				{
					cout<<"\n\tEl elemento "<<dato<<" SI se encontro en el arbol\n\n";
					break;
				}
				
				cout<<"\n\tEl elemento "<<dato<<" NO se encontro en el arbol\n\n";
				break;
				
			case 4:
				
				cout<<"\n\tRecorriendo el arbol en PreOrden...\n";
				PreOrden(arbol);
				cout<<endl;
				break;
				
			case 5:
				cout<<"\n\tRecorriendo el arbol en InOrden...\n";
				InOrden(arbol);
				cout<<endl;
				break;
				
			case 6:
				cout<<"\n\tRecorriendo el arbol en PostOrden...\n";
				PostOrden(arbol);
				cout<<endl;
				break;
				
			case 7:
				cout<<"\nElemento a eliminar del arbol: "; cin>>dato;
				Eliminar(arbol, dato);
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
