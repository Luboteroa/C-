/* 11. Realice una funci�n que tome como par�metros un vector de n�meros enteros y devuelva la suma de los elementos */

#include<iostream>
#include<conio.h>

using namespace std;

void SumaMatriz(int vec[], int&);

int main()
{
	int numeros[] = {1,2,3,4,5};
	int suma;
	
	SumaMatriz(numeros, suma);	
	cout<<"La suma total es: "<<suma<<endl;
	
	getch();
	return 0;
}

void SumaMatriz(int vec[], int& suma)
{
	int sizeArray = sizeof(vec)/sizeof(int);
	cout<<"Size: "<<sizeArray;
	
	for (int i=0; i<sizeArray; i++)
	{
		cout<<i;
		suma += vec[i];
	}
}
