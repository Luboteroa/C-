/* 19. Realice una función recursiva que sume los primeros n enteros positivos 
Nota: para plantear la función recursiva tenga en cuenta que la suma puede expresarse mediante la siguiente recurrencia:

	suma(n) = 1				, si n=1
		      n+suma(n-1)	, si n>1
*/

#include<iostream>
#include<conio.h>

using namespace std;

int Suma(int n);

int numero;

int main()
{
	cout<<"Digite un numero: "; cin>>numero;
	
	numero = Suma(numero);
	
	cout<<"La suma es: "<<numero<<endl;
	
	getch();
	return 0;
} 

int Suma(int n)
{
	if(n==1)
	{
		return 1;
	}
	else if(n<0)
	{
		return 0;
	}
	 return (n+Suma(n-1));
}
