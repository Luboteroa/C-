/* 14. En una clase de 5 alumnos se han realizado tres ex�menes y se requiere determinar el numero de:

a). Alumnos que aprobaron todos los ex�menes.
b). Alumnos que aprobaron al menos un examen.
c). Alumnos que reprobaron �nicamente el �ltimo examen.

Realice un programa que permita la lectura de los datos y el c�lculo de las estad�sticas */

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	//Se gana por encima de 3.0
	float resultadoUno, resultadoDos, resultadoTres; int aprobaronTodo=0, aprobaronUno=0, reprobaronUlt=0;
	
	for(int i = 1; i <= 5; i++)
	{
		//Loop de alumnos
		cout<<"Introduzca el resultado en el examen 1 para el estudiante #"<<i<<": "; cin>>resultadoUno;
		cout<<"Introduzca el resultado en el examen 2 para el estudiante #"<<i<<": "; cin>>resultadoDos;
		cout<<"Introduzca el resultado en el examen 3 para el estudiante #"<<i<<": "; cin>>resultadoTres;
		
		if(resultadoUno >= 3 && resultadoDos >= 3 && resultadoTres >= 3)
		{
			aprobaronTodo++;
		}
		if(resultadoUno >=3 || resultadoDos >= 3 || resultadoTres >= 3)
		{
			aprobaronUno++;
		}
		if(resultadoTres<3 && resultadoDos>=3 && resultadoUno>=3)
		{
			reprobaronUlt++;
		}
	}
	
	cout<<"El numero de estudiantes que aprobaron todos los examenes fue: "<<aprobaronTodo<<endl;
	cout<<"El numero de estudiantes que aprobaron al menos un examen fue: "<<aprobaronUno<<endl;
	cout<<"El numero de estudiantes que reprobaron unicamente el ultimo examen fue: "<<reprobaronUlt<<endl;
	
	getch();
	return 0;
}
