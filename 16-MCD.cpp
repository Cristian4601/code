#include <iostream>
using namespace std;


int MaxD (int,int);
int main ()
{
	int Num1, Num2, Rta;
	
	cout<<"ingrese el primer numero: ";
	cin>>Num1;
	cout<<"ingrese el segundo numero: ";
	cin>>Num2;
	if (Num1>0 && Num2>0)
	{
		
		Rta=MaxD(Num1, Num2);
		
		cout<<"El maximo comun divisor es: "<<Rta<<endl;
	}
	else
	{
		cout<<"numero negativo"<<endl;
	}
	
	return 0;
}

int MaxD (int N1, int N2)
{
	int Cont1, Cont2, Div1, Opc;
	
	for(Cont1=N1;Cont1>=1;Cont1--)
	{
		if(N1%Cont1==0)
		{
			for(Cont2=N2;Cont2>=1;Cont2--)
			{
				if(Cont1>Cont2)
				{
					break;
				}
				else
				{
					if(N2%Cont2==0)
					{
						if(Cont1==Cont2)
						{
							return Cont2;
						}
					}
				}
			}
		}
	}
}
