/* 9. Escriba una funci�n nombrada Tiempo() que tenga un par�metro en n�mero entero llamado totalSeg y tres par�metros de referencia enteros
nombrados horas, min y seg. La funci�n es convertir el n�mero de segundos transmitido en un n�mero equivalente de horas, minutos y segundos */

#include<iostream>
#include<conio.h>

using namespace std;

void Tiempo(int&, int&, int&, int&);

int main()
{
	int totalSeg, horas, minutos, segundos;
	
	cout<<"Digite los segundos totales: "; cin>>totalSeg;
	
	Tiempo(totalSeg, horas, minutos, segundos);
	
	
	cout<<"El tiempo total fue:"<<endl
		<<"Horas: "<<horas<<endl
		<<"Minutos: "<<minutos<<endl
		<<"Segundos: "<<segundos<<endl;
	getch();
	return 0;
}

void Tiempo(int& totalSeg, int& horas, int& minutos, int& segundos)
{
	horas = totalSeg/3600;
	totalSeg %= 3600;
	
	minutos = totalSeg/60;
	
	segundos = totalSeg%60;
}
