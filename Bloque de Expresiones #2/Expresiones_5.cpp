//5. Escriba un fragmento de programa que intercambie los valores de dos variables

#include<iostream>

using namespace std;

int main()
{
	float x, y, saver;
	
	cout<<"Digita x: "; cin>>x;
	cout<<"Digite y: "; cin>>y;
	
	saver = y;
	y = x;
	x = saver;
	
	cout<<"\nValores intercambiados\nX: "<<x<<endl<<"Y: "<<y<<endl;
	
	return 0;
}
