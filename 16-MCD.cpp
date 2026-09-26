#include <iostream>
using namespace std;


int MaxD (int,int);
int main ()
{
	int Num1, Num2;
	
	cout<<"ingrese el primer numero: ";
	cin>>Num1;
	cout<<"ingrese el segundo numero: ";
	cin>>Num2;

	cout<<"El maximo comun divisor es: "<<MaxD(Num1, Num2)<<endl;
	
	return 0;
}

int MaxD (int N1, int N2)
{
	int Rta;
	if (N2==0)
	{
		Rta=N1;
	}
	else
	{
		Rta=MaxD(N2, N1%N2);
	}

	return Rta;
}
