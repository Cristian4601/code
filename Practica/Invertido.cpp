//cargar un vector de 7 tipo entero e invierta con 1 arreglo

#include <iostream>
using namespace std;

int main ()
{
	int Cont, Vec1[7], Cam;
	
	
	for (Cont=0; Cont<7; Cont++)
	{
		cout<<"ingrese el numero "<<Cont+1<<": ";
		cin>>Vec1[Cont];
	}
	
	

	for (Cont=0; Cont<4; Cont++)
	{
		Cam=Vec1[Cont];
		Vec1[Cont]=Vec1[6-Cont];
		Vec1[6-Cont]=Cam;
	}
		
	cout<<"El resutado es { ";
	for (Cont=0; Cont<7; Cont++)
	{
		cout<<Vec1[Cont]<<" ";
	}
	cout<<"}"<<endl;
}
