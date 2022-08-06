//2. Escriba la expresión matemática en C++

#include <iostream>

using namespace std;

int main()
{
	float a, b, c, d, resultado = 0;
	
	cout<<"Digite a: "; cin>>a;
	cout<<"Digite b: "; cin>>b;
	cout<<"Digite c: "; cin>>c;
	cout<<"Digite d: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(2);
	cout<<"\nSu resultado es: "<<resultado<<endl;
	
	return 0;
}
