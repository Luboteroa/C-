/* 7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos:
Horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas */

#include<iostream>
#include<conio.h>

using namespace std;

struct Etapa
{
	int horas, minutos, segundos;
}etapas[100];

int main()
{
	int n_etapas, horasTotales=0, minutosTotales=0, segundosTotales=0;
	cout<<"Indique el numero de etapas: "; cin>>n_etapas;
	
	for(int i=0; i<n_etapas; i++)
	{
		cout<<"\nEtapa #"<<(i+1)<<endl;
		cout<<"Indique el tiempo en horas de la etapa: "; cin>>etapas[i].horas;
		cout<<"Indique el tiempo en minutos de la etapa: "; cin>>etapas[i].minutos;
		cout<<"Indique el tiempo en segundos de la etapa: "; cin>>etapas[i].segundos;
		
		segundosTotales += etapas[i].segundos;
		if(segundosTotales>=60)
		{
			minutosTotales++;
			segundosTotales -=60;
		}

		minutosTotales += etapas[i].minutos;
		if(minutosTotales>=60)
		{
			horasTotales++;
			minutosTotales -= 60;
		}
		
		horasTotales += etapas[i].horas;
	}
	
	cout<<"\nEl tiempo total del ciclista fue de: "<<horasTotales<<" horas, "<<minutosTotales<<" minutos y "<<segundosTotales<<" segundos."<<endl;
		
	getch();
	return 0;
}
