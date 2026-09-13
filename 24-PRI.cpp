#include<iostream>
using namespace std;
int main()
{
	int Num,Count,Count2=0;
	cout<<"Dijite un numero: ";
	cin>>Num;
	
	if (Num>0)
	{
		for(Count=1;Count<=Num;Count++)
		{
			if(Num%Count==0)
			{
				Count2+=1;
			}
		}
		if(Count2==2)
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
		cout<<"numero negativo"
	}
}