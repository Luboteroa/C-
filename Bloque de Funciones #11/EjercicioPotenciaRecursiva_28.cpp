/* 21. Escriba una función recursiva que calcule un número elevado a una potencia entera mayor o igual que cero: x**y */

#include<iostream>
#include<conio.h>

using namespace std;

int PotenciaRecursiva(int x, int y);

int x,y;

int main()
{
	cout<<"Digite el numero: "; cin>>x;
	cout<<"Potencia: "; cin>>y;
	
	x = PotenciaRecursiva(x,y);
	
	cout<<"Resultado: "<<x<<endl;
	getch();
	return 0;
}

int PotenciaRecursiva(int x, int y)
{
	if(y==0)
	{
		return 1;
	}
	else if(y<0)
	{
		return 0;
	}
	
	return x*PotenciaRecursiva(x,y-1);
}
