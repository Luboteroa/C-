/* La sentencia DO - WHILE

	do{
		conjunto de expresiones;
	}while(expresión lógica);
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int i;
	
	i=1;
	
	do
	{
		cout<<i<<endl;
		i++;
	}while(i<=10);
	
	system("pause");4
	return 0;
}

