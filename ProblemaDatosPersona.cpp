/* 3. Realice un programa que me lea los datos de una persona y los imprima en pantalla */
// 4. Ejecute a propósito un dato erróneo sobre las variables de entrada y observe los resultados

#include <iostream>

using namespace std;

int main()
{
	int edad; char sexo[10]; float altura;
	
	cout<<"Introduzca su edad: "; cin>>edad;
	cout<<"Introduzca su sexo: "; cin>>sexo;
	cout<<"Introduzca su altura: "; cin>>altura;
	
	cout<<"\nSu edad es: "<<edad<<endl<<"Su sexo es: "<<sexo<<endl<<"Su altura es: "<<altura<<endl;
	
	return 0;
}
