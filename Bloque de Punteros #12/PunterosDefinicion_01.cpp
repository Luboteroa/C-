/* Punteros - Declaraci�n de punteros

&n = la direcci�n de n
*n = la variable cuya direcci�n est� almacenada en n

*/
//Direcci�n de memoria exacta

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num = 20, *dir_num; //Variable puntero
	dir_num = &num;
	
	cout<<"Numero: "<<num<<endl;
	
	cout<<"Numero dir_num: "<<*dir_num<<endl;
	
	cout<<"Direccion de num: "<<&num<<endl;
	
	getch();
	return 0;
}
