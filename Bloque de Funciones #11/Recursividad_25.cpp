/* Recursividad

Factorial de un numero 3! = 3*2*1

	factorial(n) = 1				, si n=0
				   n*factorial		, si n>0
*/

#include<iostream>
#include<conio.h>

using namespace std;

int Factorial(int);

int main()
{
	int n;
	cout<<"Digite un numero para sacarle el factorial: "; cin>>n;
	
	n = Factorial(n);
	
	cout<<"Resultado: "<<n<<endl;
	
	getch();
	return 0;
}

int Factorial(int n)
{
	cout<<"n = "<<n<<endl;
	if(n==0) //Caso base
	{
		return 1;
	}
	else   //Caso General
	{
		return (n * Factorial(n-1));
	}
}
