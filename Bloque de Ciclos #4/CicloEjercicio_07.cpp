/* 4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un periodo de 24 horas. Es decir,
debe leer 6 temperaturas. Calcular la temperatura media del día, la temperatura más alta y más baja */

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main()
{
	float media = 0, alta = -9999, baja = 9999, temperatura;
	
	for(int i = 0; i < 24; i+=4)
	{
		cout<<"Ingrese la temperatura a la hora "<<i<<": "; cin>>temperatura;
		media += temperatura;
		
		if(temperatura == alta || temperatura == baja){return 0;}
		
		if(temperatura > alta)
		{
			alta = temperatura;
		}
		
		if(temperatura < baja)
		{
			baja = temperatura;
		}
	}
	
	media /= media/(24/4);
	
	cout<<"\nLa temperatura mas alta fue: "<<alta;
	cout<<"\nLa temperatura mas baja fue: "<<baja;
	cout<<"\nLa media de la temperatura fue: "<<media;
	
	getch();
	return 0;
}
