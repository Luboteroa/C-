/* 6. Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir si son iguales o no. */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char textoUno[] = "HolamiNUsculA", textoDos[] = "HOLAminuscula";
	
	strupr(textoUno); strupr(textoDos);
	
	if(strcmp(textoUno, textoDos)==0)
	{
		cout<<"Ambos cadenas de texto dicen lo mismo"<<endl;
		getch();
		return 0;
	}
	
	cout<<"Los textos son distintos"<<endl;
	getch();
	return 0;
}
