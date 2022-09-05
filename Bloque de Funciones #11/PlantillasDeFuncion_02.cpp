/*Plantillas de funci�n 

Ejemplo: Sacar el valor absoluto de una funci�n */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de Funci�n
template <class TIPOD>
void MostrarABS(TIPOD numero);

int main()
{
	int num1=4;
	float num2=56.67;
	double num3=123.56, num4=-543.23;
	
	MostrarABS(num1);
	MostrarABS(num2);
	MostrarABS(num3);
	MostrarABS(num4);
	
	getch();
	return 0;
}

template <class TIPOD>
void MostrarABS(TIPOD numero)
{
	if(numero<0)
	{
		numero *= -1;
	}
	
	cout<<"El valor absoulotu del numero es: "<<numero<<endl;
}
