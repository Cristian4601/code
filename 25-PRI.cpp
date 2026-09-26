#include<iostream>
using namespace std;

bool Pri(int, int);
int main()
{
	int Num;
	
	cout<<"Dijite un numero: ";
	cin>>Num;
	
	if (Num>0)
	{
		if (Pri(Num, Num-1)==true)
		{
			cout<<"Numero primo"<<endl;
		}
		else
		{
			cout<<"Numero no es primo"<<endl;
		}
	}
	else
	{
		cout<<"numero negativo";
	}
}

bool Pri(int Num, int Paso)
{
	bool Rta=false;
	if(Paso==1)
	{
		Rta=true;
	}
	else
	{
		if(Num%Paso!=0 && Pri(Num, Paso-1))
		{
			Rta=true;
		}
		else
		{
			Rta=false;
		}
	}
	return Rta;
}