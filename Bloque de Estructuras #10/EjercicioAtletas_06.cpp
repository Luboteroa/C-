/* 4. Hacer un arreglo de estructuras llamada 'Atleta' para N atletas que contenga los siguientes campos:
nombre, país, número_medallas.
Devuelva los datos (nombre, país) del atleta que ha ganado el mayor número de medallas */

#include<iostream>
#include<conio.h>

using namespace std;

struct Atleta
{
	char nombre[20];
	char pais[20];
	int numeroMedallas;
}atletas[100];

int main()
{
	int num_atletas;
	cout<<"Introduzca el numero de atletas: "; cin>>num_atletas;
	cout<<endl;
	
	int mejorMedallero = -1, posMejor = -1;
	for(int i=0; i<num_atletas; i++)
	{
		fflush(stdin);
		cout<<"Atleta #"<<(i+1)<<"."<<endl;
		cout<<"Introduzca el nombre del atleta "<<": "; cin.getline(atletas[i].nombre, 20, '\n');
		cout<<"Introduzca su pais: "; cin.getline(atletas[i].pais, 20, '\n');
		cout<<"Introduzca el numero de medallas: "; cin>>atletas[i].numeroMedallas;
		
		if(atletas[i].numeroMedallas>mejorMedallero)
		{
			mejorMedallero = atletas[i].numeroMedallas;
			posMejor = i;
		}
		cout<<endl;
	}
	
	cout<<"El atleta con mejor medallero fue:"<<endl;
	cout<<atletas[posMejor].nombre<<". Que es de "<<atletas[posMejor].pais<<endl;
	cout<<"El tiene "<<atletas[posMejor].numeroMedallas<<" medallas."<<endl;
	
	getch();
	return 0;
}
