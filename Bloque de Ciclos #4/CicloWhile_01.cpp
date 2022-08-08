/* La sentencia WHILE

	while(expresion logica)
	{
		conjunto de instrucciones;
	}
*/

#include<iostream>
#include<conio.h> //librería que permite ver mi archivo .exe

using namespace std;

int main()
{
	int i; //iterador
	
	i=10;
	
	while(i>=1)
	{
		cout<<i<<endl;
		i--;
	}
	
	getch();
	return 0;
}
