//Pasar una palabra a min�scula - Funci�n strlwr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra[] = "HOLA BUENAS TARDES";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	getch();
	return 0;
}
