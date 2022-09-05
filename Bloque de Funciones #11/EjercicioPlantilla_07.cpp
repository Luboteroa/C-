/* 5. Escriba una plantilla de función llamada Despliegue() que despliegue el valor del argumento único que se le transmite cuando se invoca la 
función */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de función
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
