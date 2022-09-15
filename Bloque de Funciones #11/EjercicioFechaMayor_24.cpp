/* Escriba una función en C++ llamada Mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le transmitan.
Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a Mayor(), será devuelta la segunda fecha */

#include<iostream>
#include<conio.h>

using namespace std;

struct Fecha
{
	int dia, mes, year;
}fecha1, fecha2;

void PedirDatos();
Fecha Mayor(Fecha fecha1, Fecha fecha2);
void MostrarFechaMayor(Fecha fecha);

int main()
{
	Fecha fechaMayor;
	
	PedirDatos();
	
	fechaMayor = Mayor(fecha1, fecha2);
	
	MostrarFechaMayor(fechaMayor);
	
	getch();
	return 0;
}

void PedirDatos()
{
	cout<<"Digite el dia de la fecha 1: "; cin>>fecha1.dia;
	cout<<"Digite el mes de la fecha 1: "; cin>>fecha1.mes;
	cout<<"Digite el ano de la fecha 1: "; cin>>fecha1.year;
	cout<<endl;
	
	cout<<"Digite el dia de la fecha 2: "; cin>>fecha2.dia;
	cout<<"Digite el mes de la fecha 2: "; cin>>fecha2.mes;
	cout<<"Digite el ano de la fecha 2: "; cin>>fecha2.year;
	cout<<endl;
}

Fecha Mayor(Fecha fecha1, Fecha fecha2)
{
	if(fecha1.year>fecha2.year)
	{
		return fecha1;
	}
	else if(fecha2.year>fecha1.year)
	{
		return fecha2;
	}
	else
	{
		if(fecha1.mes>fecha2.mes)
		{
			return fecha1;
		}
		else if(fecha2.mes>fecha2.mes)
		{
			return fecha2;
		}
		else
		{
			if(fecha1.dia>fecha2.dia)
			{
				return fecha1;
			}
			else
			{
				return fecha2;
			}
		}
	}
}

void MostrarFechaMayor(Fecha fecha)
{
	cout<<"La fecha mayor es:"<<endl;
	cout<<fecha.dia<<"/"<<fecha.mes<<"/"<<fecha.year<<endl;
}
