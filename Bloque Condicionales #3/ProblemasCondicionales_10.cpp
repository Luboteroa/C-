/* Hacer un programa que introduzca tres numeros, luego introducir un cuarto e indicar si el numero coincide con los anteriores */

#include <iostream>

using namespace std;

int main()
{
	int n1, n2, n3, comparador;
	
	cout<<"Ingrese tres numeros: "; cin>>n1>>n2>>n3;
	
	cout<<"\nIntrese otro numero: "; cin>>comparador;
	
	if(comparador == n1 || comparador == n2 || comparador == n3)
	{
		cout<<"Su ultimo numero ya habia salido entre los tres primeros";
		return 0;
	}
	cout<<"Su ultimo numero no coincide con los tres anteriores";
	return 0;
}
