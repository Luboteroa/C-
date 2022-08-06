//9. Realice un programa que haga la siguiente operación

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y, resultado = 0;
	
	cout<<"Introduzca X: "; cin>>x;
	cout<<"Introduzca Y: "; cin>>y;
	
	resultado = sqrt(x)/(pow(y,2)-1);
	
	cout<<"\nSu resultado es: "<<resultado<<endl;
}
