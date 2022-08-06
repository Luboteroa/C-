//4. Escriba la siguiente expresión 

#include<iostream>

using namespace std;

int main()
{
	float a,b,c,d, resultado = 0;
	
	cout<<"Digite a: "; cin>>a;
	cout<<"Digite b: "; cin>>b;
	cout<<"Digite c: "; cin>>c;
	cout<<"Digite d: "; cin>>d;
	
	resultado = a + b/(c-d);
	
	cout.precision(3);
	cout<<"\nSu resultado fue: "<<resultado<<endl;
	
	return 0;
}
