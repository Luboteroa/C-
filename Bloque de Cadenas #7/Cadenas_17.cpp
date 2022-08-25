/* Pedir al usuario 2 cadenas de caracteres de números, uno entero y el otro real, convertirlos a sus respectivos valores y por último, sumarlos */

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
	char textoUno[20], textoDos[20];
	int numeroEntero; float numeroReal, resultado;
	
	cout<<"Digite un numero entero: "; cin.getline(textoUno, 20, '\n');
	cout<<"Digite un numero real: "; cin.getline(textoDos, 20, '\n');
	
	numeroEntero = atoi(textoUno);
	numeroReal = atof(textoDos);
	
	resultado = numeroEntero + numeroReal;
	
	cout<<"El resultado entre la suma de los dos numeros digitados es: "<<resultado<<endl;
	
	getch();
	return 0;
}
