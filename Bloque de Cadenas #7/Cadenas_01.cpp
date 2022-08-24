// Cadenas de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	char palabra[] = "Luis Carlos";
	char palabra2[] = {'L','u','i','s',' ','C','a','r','l','o','s'};
	char nombre[30];
	
		cout<<palabra<<endl<<palabra2<<endl;
	
	cout<<"Digite su nombre: "; //cin>>nombre; //El cin no recepta los espacios, no es buena utilizarlo para cadena de caracteres
	//gets(nombre); //Gets no le presta importancia al tamaño que le di al inicio del programa
	cin.getline(nombre,20,'\n');
	
	cout<<nombre<<endl;
	
	getch();
	return 0;
}
