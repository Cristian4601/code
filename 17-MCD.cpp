#include <iostream>
using namespace std;


int MaxD (int,int);
int MinM(int,int);
int main ()
{
    int Num1, Num2;
	
	cout<<"ingrese el primer numero: ";
	cin>>Num1;
	cout<<"ingrese el segundo numero: ";
	cin>>Num2;

	cout<<"El minimo comun multiplo es: "<<MinM(Num1, Num2)<<endl;

	return 0;
}

int MinM(int N1,int N2)
{
    return N1*N2/MaxD (N1, N2);
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