/* 10. Escriba una funci�n nombrada calc_anos() que tenga un par�metro entero que represente el n�mero total de d�as desde la fecha 1/1/2000 y 
par�metros de referencia nombrados a�o, mes y d�a. La funci�n es calcular el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan
Para este problema suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as. */

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
