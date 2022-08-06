// Ejercicio 2. Aplicar IVA	al precio de un producto

#include <iostream>

using namespace std;

int main()
{
	float precio, iva = 0.21, resultado;
	
	cout<<"Ingrese el precio del producto: "; cin>>precio;
	
	resultado = precio*iva + precio;
	
	cout<<"Resultado con IVA incluido: "<<resultado<<endl;
	
	return 0;
}
