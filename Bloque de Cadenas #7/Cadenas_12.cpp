//Pasar una palabra a MAYUSCULA - Funci�n strupr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra[] = "luis";
	strupr(palabra);
	
	cout<<palabra<<endl;

	getch();
	return 0;
}
