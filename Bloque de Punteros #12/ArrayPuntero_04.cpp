//Correspondencia entre arrays y punteros

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[] = {1,2,3,4,5};
	int *dir_num;
	
	dir_num = numeros;
	
	for(int i=0; i<5; i++)
	{
		cout<<"Posiciones de memoria: "<<numeros[i]<<" es: "<<dir_num++<<endl;
		cout<<"Elemento del vector ["<<i<<"]: "<<*dir_num++<<endl;
	}
	
	getch();
	return 0;
}
