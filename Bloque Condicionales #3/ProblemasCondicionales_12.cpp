//10. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes que corresponde

#include<iostream>

using namespace std;

int main()
{
	int numero;
	
	cout<<"Introduzca un numero: "; cin>>numero;
	
	switch(numero)
	{
		case 1: cout<<"Es Enero"<<endl; break;
		case 2: cout<<"Es Febrero"<<endl; break;
		case 3: cout<<"Es Marzo"<<endl; break;
		case 4: cout<<"Es Abril"<<endl; break;
		case 5: cout<<"Es Mayo"<<endl; break;
		case 6: cout<<"Es Junio"<<endl; break;
		case 7: cout<<"Es Julio"<<endl; break;
		case 8: cout<<"Es Agosto"<<endl; break;
		case 9: cout<<"Es Septiembre"<<endl; break;
		case 10: cout<<"Es Octubre"<<endl; break;
		case 11: cout<<"Es Noviembre"<<endl; break;
		case 12: cout<<"Es Diciembre"<<endl; break;
		default: cout<<"No existe mes para ese numero";
	}
	
	return 0;
}
