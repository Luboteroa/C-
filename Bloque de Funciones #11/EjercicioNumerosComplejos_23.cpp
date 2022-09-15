/* 17. Suma de números complejos

z1 = 5-3i     ,     z2 = -4+2i

z1 + z2 = (5-3i) + (-4+2i)
		= 5-3i-4+2i
		= 1-i
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Complejo
{
	float real, imaginaria;
}z1, z2;

Complejo SumaNumerosComplejos(Complejo z1, Complejo z2);
void PedirDatos();
void MostrarDatosComplejos(Complejo complejo);

int main()
{
	Complejo z3;
	PedirDatos();
	
	z3 = SumaNumerosComplejos(z1, z2);
	
	MostrarDatosComplejos(z3);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite la parte real de z1: "; cin>>z1.real;
	cout<<"Digite la parte imaginaria de z1: "; cin>>z1.imaginaria;
	cout<<"Digite la parte real de z2: "; cin>>z2.real;
	cout<<"Digite la parte imaginaria de z2: "; cin>>z2.imaginaria;
	cout<<endl;
}

Complejo SumaNumerosComplejos(Complejo z1, Complejo z2)
{
	Complejo complejoActual;
	float realActual, imaginarioActual;
	
	realActual = z1.real + z2.real;
	imaginarioActual = z1.imaginaria + z2.imaginaria;
	
	complejoActual.real = realActual;
	complejoActual.imaginaria = imaginarioActual;
	
	return complejoActual;
}

void MostrarDatosComplejos(Complejo complejo)
{
	cout<<"El complejo es: "<<complejo.real<<" "<<complejo.imaginaria<<"i";
	cout<<endl;
}


