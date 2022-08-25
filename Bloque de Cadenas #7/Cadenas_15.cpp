/* 7. Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, convertir su nombre a minúsculas, caso contrario, no
convertirlo */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char nombre[20];
	
	cout<<"Digite su nombre en MAYUSCULAS: "; cin.getline(nombre, 20, '\n');
	
	if(nombre[0] == 'A')
	{
		cout<<"Su nombre comienza por A"<<endl;
		cout<<strlwr(nombre)<<endl;
		getch();
		return 0;
	} 
	
	cout<<"Su nombre no comienza por A"<<endl;
	cout<<nombre<<endl;
	getch();
	return 0;
}
