/* Hacer un menú que considere las siguientes opciones: 
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: Salir
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int opcion, numeroPar; float numeroCubo;
	
	cout<<"\n1. Cubo de un numero"<<endl; 
	cout<<"\n2. Numero par o impar"<<endl;
	cout<<"\n3. Salir"<<endl;
	cout<<"Opcion: "; cin>>opcion;
	
	switch(opcion)
	{
		case 1:
			cout<<"Digite el numero que quiere sacarle el exponente cubico: "; cin>>numeroCubo;
			numeroCubo = pow(numeroCubo, 3);
			cout<<"El cubo de este numero es: "<<numeroCubo;
			break;
		case 2:
			cout<<"Digite un numero: "; cin>>numeroPar;
			if(numeroPar % 2 == 0)
			{
				cout<<"Su numero es par";
				break;
			}
			cout<<"Su numero es impar";
			break;
		case 3:
			cout<<"Salir";
			break;
		default: 
			cout<<"Rango fuera de lo expuesto";
	}
	
	return 0;
}
