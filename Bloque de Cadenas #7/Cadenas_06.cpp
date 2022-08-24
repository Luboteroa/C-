//Comparar cadenas - Función strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra1[] = "Hola", palabra2[] = "Hola";
	
	if(strcmp(palabra1, palabra2) == 0)
	{
		cout<<"Ambas cadenas son iguales"<<endl;
	}
	else
	{
		cout<<"Las cadenas no son iguales"<<endl;	
	}
	
	char palabra3[] = "Becerro", palabra4[] = "Avion";
	
	if(strcmp(palabra3, palabra4) > 0)
	{
		cout<<palabra3<<" esta despues alfabeticamente."<<endl;
	}
	else
	{
		cout<<palabra4<<" esta despues alfabeticamente."<<endl;	
	}
	
	getch();
	return 0;
}
