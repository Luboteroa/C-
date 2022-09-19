/* Asignaci�n din�mica de arreglos 

new: Reserva el n�mero de bytes solicitado por la declaraci�n.
delete: Libera un bloque de bytes reservado con anterioridad.

ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo din�mico 
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> //Funciona new y delete

using namespace std;

//Prototipo de funci�n
void PedirNotas();
void MostrarNotas();

int numCalif, *calif;

int main()
{
	PedirNotas();
	MostrarNotas();
	
	delete[] calif;
	
	getch();
	return 0;
}

void PedirNotas()
{
	cout<<"Digite el numero de calificaciones: "; cin>>numCalif;
	
	calif = new int[numCalif]; //Crear el arreglo
	
	for(int i=0; i<numCalif; i++)
	{
		cout<<"Ingrese una nota: "; cin>>calif[i];
	}
}

void MostrarNotas()
{
	cout<<"\nMostrando notas del usuario\n";
	for(int i=0; i<numCalif; i++)
	{
		cout<<calif[i]<<endl;
	}
}

