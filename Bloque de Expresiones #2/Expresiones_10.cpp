//10. Escriba un programa que calcule las soluciones de segundo grado

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a,b,c,x1,x2;
	
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	
	x1 = -b + sqrt(pow(b,2)-4*a*c)/(2*a);
	x2 = -b - sqrt(pow(b,2)-4*a*c)/(2*a);
	
	cout<<"\Resultado de X1: "<<x1<<endl;
	cout<<"Resultado de X2: "<<x2<<endl;
	
	return 0;
}
