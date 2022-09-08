/* 8. Escriba una función nombrada Cambio() que tenga un parámetro en número entero y seis parámetros de referencia en número entero nombrados
cien, cincuenta, veinte, diez, cinco y uno, respectivamente.
La función tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir el valor en el número menor de billetes
equivalentes */

#include<iostream>
#include<conio.h>

using namespace std;

void Cambio(int&, int&, int&, int&, int&, int&, int&);

int main()
{
	int valor, cien, cincuenta, veinte, diez, cinco, uno;
	
	cout<<"Digite la cantidad en dolares: "; cin>>valor;
	
	Cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);
	
	cout<<"Su cambio es: "<<endl<<cien<<" billetes de cien\n"<<cincuenta<<" billetes de cincuenta\n"<<veinte<<" billetes de veinte\n"<<diez<<
		" billetes de diez\n"<<cinco<<" billetes de cinco\n"<<uno<<" billetes de un dolar";
	
	getch();
	return 0;
}

void Cambio(int& valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)
{
	cien = valor/100;
	valor %= 100;
	
	cincuenta = valor/50;
	valor %= 50;
	
	veinte = valor/20;
	valor %= 20;
	
	diez = valor/10;
	valor %= 10;
	
	cinco = valor/5;
	valor %= 5;
	
	uno = valor;
}
