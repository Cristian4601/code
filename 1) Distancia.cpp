#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float Num1x, Num2x, Num1y, Num2y, Nu21x, Nu21y, Dist, Rta;
	
	cout<<"ingrese primera cordenada"<<endl<<"x: ";
	cin>>Num1x;
	cout<<"y: ";
	cin>>Num1y;
	
	cout<<"ingrese segunda cordenada"<<endl<<"x: ";
	cin>>Num2x;
	cout<<"y: ";
	cin>>Num2y;
	
	Nu21x=Num2x-Num1x;
	Nu21y=Num2y-Num1y;
	
	Dist=Nu21x*Nu21x+Nu21y*Nu21y;
	Rta=sqrt(Dist);
	
	cout<<"La distacia euclidiana es: "<<Rta<<endl;
	
	return 0;
}
