/* 3. Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cuál es el mayor
alfabéticamente */

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
	char textoUno[30], textoDos[30];
	
	cout<<"Digite un texto: ";
	cin.getline(textoUno, 30, '\n');
	
	cout<<"Digite otro texto: ";
	cin.getline(textoDos, 30, '\n');
	
	if(strcmp(textoUno, textoDos)==0)
	{
		cout<<"Ambos textos son iguales"<<endl;
		system("pause");
		return 0;
	}
	else if(strcmp(textoUno, textoDos)>0)
	{
		cout<<textoUno<<" Es mayor alfabeticamente."<<endl;
		system("pause");
		return 0;
	}
	
	cout<<textoDos<<" Es mayor alfabeticamente."<<endl;
	system("pause");
	return 0;
}
