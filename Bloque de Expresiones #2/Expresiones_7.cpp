//7. Calificaciones con promedio

#include <iostream>

using namespace std;

int main()
{
	float nota1, nota2, nota3, nota_final=0;

	cout<<"Ingrese su nota practicas: "; cin>>nota1;
	cout<<"Ingrese su nota teoricas: "; cin>>nota2;
	cout<<"Ingrese su nota participacion: "; cin>>nota3;
	
	nota1 *= 0.3;
	nota2 *= 0.6;
	nota3 *= 0.1;
	
	nota_final = nota1 + nota2 + nota3;
	
	cout.precision(3);
	cout<<"\nLa nota final es: "<<nota_final<<endl;

	return 0;
}
