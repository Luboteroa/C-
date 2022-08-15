/* 9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial de un numero) */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int n, factorial=1;
	
	cout<<"Digite el valor factorial: "; cin>>n;
	
	for(int i = 1; i<=n; i++)
	{
		factorial *= i;
	}
	
	cout<<"El resultado del factorial de "<<n<<" es "<<factorial;
	
	getch();
	return 0;
}
