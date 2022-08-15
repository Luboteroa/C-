/* Hacer un programa que realice la serie de fibonacci */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int n, valorNuevo = 1, valorAnterior = 0, valorAGuardar;
	
	cout<<"Ingrese el numero de iteraciones: "; cin>>n;
	
	for(int i=1; i<n; i++)
	{
		valorAGuardar = valorAnterior;
		valorAnterior = valorNuevo;
		cout<<valorNuevo<<endl;
		valorNuevo += valorAGuardar;
	}
	
	cout<<"El resultado es: "<<valorNuevo<<endl;
	
	getch();
	return 0;
}
