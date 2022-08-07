//Condicionales simples y condicionales dobles

/* Sentencia if

	if(condicion){
		Instruccion 1
	}
	else{
		Instruccion 2
	}
*/

#include<iostream>

using namespace std;

int main()
{
	int numero, dato = 5;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero == dato)
	{
		cout<<"El numero es 5";
	}
	else
	{
		cout<<"El numero es diferente de 5";
	}
}
