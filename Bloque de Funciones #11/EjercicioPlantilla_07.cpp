/* 5. Escriba una plantilla de funci�n llamada Despliegue() que despliegue el valor del argumento �nico que se le transmite cuando se invoca la 
funci�n */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funci�n
template <class TIPOD>
void Despliegue(TIPOD valor);

int main()
{
	Despliegue(1.2f);
	Despliegue(-1);
	Despliegue('c');
	Despliegue("Luis Carlos");
	getch();
	return 0;
}

template <class TIPOD>
void Despliegue(TIPOD valor)
{
	cout<<valor<<endl;
}
