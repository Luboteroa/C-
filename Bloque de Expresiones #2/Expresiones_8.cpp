//8. Escriba un programa que reciba los catetos y entregue la hipotenusa

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float cateto1, cateto2, hipotenusa = 0;
	
	cout<<"Introduzca el primer cateto: "; cin>>cateto1;
	cout<<"Introduzca el segundo cateto: "; cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

	cout.precision(2);	
	cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
}
