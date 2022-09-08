/* 10. Escriba una función nombrada calc_anos() que tenga un parámetro entero que represente el número total de días desde la fecha 1/1/2000 y 
parámetros de referencia nombrados año, mes y día. La función es calcular el año, mes y día actual para el número dado de días que se le transmitan
Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días. */

#include<iostream>
#include<conio.h>

using namespace std;

void calc_anos(int&, int&, int&, int&);

int main()
{
	int fecha, ano=2000, mes=1, dia=1;
	
	cout<<"Digite los dias que han pasado: "; cin>>fecha;
	
	calc_anos(fecha, ano, mes, dia);
	
	cout<<"La fecha actual es: "<<endl
		<<dia<<"/"<<mes<<"/"<<ano;
	
	getch();
	return 0;
}

void calc_anos(int& fecha, int& ano, int& mes, int& dia)
{
	ano += fecha/365;
	fecha %= 365;
	
	mes += fecha/30;
	
	dia += fecha%30;
}
