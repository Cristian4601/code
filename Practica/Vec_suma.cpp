#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	int Cont, Vec1[9], Vec2[9], Vec3[9];
	
	srand(time(NULL));
	
	for (Cont=0; Cont<=8; Cont++)
	{
		cout<<"ingrese el numero "<<Cont+1<<": ";
		cin>>Vec1[Cont];
		
		Vec2[Cont]=rand()%100+1;
		//cout<<"1-- "<<Vec1[Cont]<<endl;
		//cout<<"2-- "<<Vec2[Cont]<<endl;
	}
	
	cout<<"El resutado es { ";
	for (Cont=0; Cont<=8; Cont++)
	{
		Vec2[Cont]=Vec1[Cont]+Vec2[Cont];
		cout<<Vec2[Cont]<<" ";
	}
	cout<<"}"<<endl;
}
