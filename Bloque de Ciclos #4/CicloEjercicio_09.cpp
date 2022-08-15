/* Escriba un programa que calcule x**y, donde tanto x como y son enteros positivos sin utilizar la función pow */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int x, y, elevacion = 1;
	
	do
	{
		cout<<"Digite el valor de X: "; cin>>x;
		cout<<"Digite el valor de Y: "; cin>>y;
	}while(x < 0 && y < 0);
	
	for(int i = 1; i<=y; i++)
	{
		elevacion *= x;
	}
	
	cout<<"El resultado de la potencia de "<<x<<" elevado "<<y<<" es: "<<elevacion;
	
	getch();
	return 0;
}
