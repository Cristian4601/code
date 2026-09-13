#include<iostream>
using namespace std;

bool Pri(int);
int main()
{
	int Num;
	
	cout<<"Dijite un numero: ";
	cin>>Num;
	
	if (Num>0)
	{
		if (Pri(Num)==true)
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

bool Pri(int Num)
{
	int Count,Count2=0;
	bool Rta=false;
	for(Count=1;Count<=Num;Count++)
	{
		if(Num%Count==0)
		{
			Count2+=1;
		}
	}
	if(Count2==2)
	{
		Rta=true;
	}
	else
	{
		Rta=false;	
	}
	return Rta;
}