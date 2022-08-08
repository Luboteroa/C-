/* 2. Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento
el programa debe terminar y mostrar en la salida el numero de valores mayores a 0 introducidos */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int numero, conteo = 0;
	
	do
	{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero>0)
		{
			conteo++;
		}
		
	}while(numero != 0);
	
	cout<<"El numero de valores mayores introducidos es: "<<conteo<<endl;
	
	system("pause");
	return 0;
}
