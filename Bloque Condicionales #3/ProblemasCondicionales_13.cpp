/* Hacer un programa que simule un cajero automático con un saldo inicial de 1000 dólares */

#include <iostream>

using namespace std;

int main()
{
	float saldoInicial = 1000, extra, saldo;
	int opc;
	
	cout<<"\tBienvenido a su cajero virtual"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; cin>>opc;
	
	switch(opc)
	{
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: "; cin>>extra;
			saldo = saldoInicial + extra;
			cout<<"Dinero en cuenta: "<<saldo;
			break;
		case 2:
			cout<<"Digite la cantidad de dinero a extraer: "; cin>>extra;
			if(extra > saldoInicial)
			{
				cout<<"No tiene esta cantidad de dinero en su cuenta";
			}
			else
			{
				saldo = saldoInicial - extra;
				cout<<"Dinero en cuenta: "<<saldo;
			}
			break;
		case 3: 
			cout<<"Salir";
	}
}
