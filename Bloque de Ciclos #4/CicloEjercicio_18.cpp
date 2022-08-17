/* 15. Realice un programa que solicite al usuario que piense en un n�mero del [1-100]. El programa debe generar un n�mero aleatorio
en ese mismo rango, e indicarle al usuario si el n�mero que digit� es mayor o menor al n�mero aleatorio, as� hasta que lo adivine.
Y por �ltimo, mostrarle el n�mero de intentos que le llev� */

//NumeroAleatorio = Limite_inferior + rand() % (limite_superario + 1 - limite_inferior);

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL)); //Generar un numero aleatorio
	
	int numAleatorio, numRegistrado=0, numIntentos=0;
	
	numAleatorio = 1 + rand() % 100;
	
	do
	{
		numIntentos++;
		cout<<"Digite un n�mero entre el 1 y el 100: "; cin>>numRegistrado;
		if(numRegistrado > numAleatorio)
		{
			cout<<"El numero aleatorio es mas pequeno que el registrado"<<endl;
		}
		else if(numRegistrado < numAleatorio)
		{
			cout<<"El numero aleatorio es mas grande que el registrado"<<endl;
		}
	}while(numAleatorio != numRegistrado);
	
	cout<<"\nConseguido! Su numero de intenetos fue: "<<numIntentos<<endl;
	
	system("pause");
	return 0;
}
