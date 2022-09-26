/* 12. Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa. La estructura debe tener tres campos:
horas, minutos y segundos.
Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr todas las etapas.

NOTA: Usar punteros.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Etapa
{
	int horas, minutos, segundos;
}etapas[3], *puntero_etapas = etapas;

void PedirDatos();
void CalcularMejorEtapa(Etapa *);

int main()
{
	PedirDatos();
	CalcularMejorEtapa(puntero_etapas);
	
	getch();
	return 0;
}

void PedirDatos()
{
	for(int i=0; i<3; i++)
	{
		cout<<"Etapa "<<(i+1)<<endl;
		cout<<"Digite las horas: "; cin>>(puntero_etapas+i)->horas;
		cout<<"Digite los minutos: "; cin>>(puntero_etapas+i)->minutos;
		cout<<"Digite los segundos: "; cin>>(puntero_etapas+i)->segundos;
		cout<<endl;
	}
}

void CalcularMejorEtapa(Etapa *puntero_etapas)
{
	int horasTotales=0, minutosTotales=0, segundosTotales=0;
	for(int i=0; i<3; i++)
	{
		segundosTotales += (puntero_etapas+i)->segundos;
		if(segundosTotales>=60)
		{
			minutosTotales++;
			segundosTotales -= 60;
		}
		minutosTotales += (puntero_etapas+i)->minutos;
		if(minutosTotales>=60)
		{
			horasTotales++;
			minutosTotales -= 60;
		}
		horasTotales += (puntero_etapas+i)->horas;
	}
	
	//Mostrar el resultado
	cout<<"\nEl tiempo total recorrido fue: "<<endl;
	cout<<horasTotales<<" horas, "<<minutosTotales<<" minutos, "<<segundosTotales<<" segundos."<<endl;
}
