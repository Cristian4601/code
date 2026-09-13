#include <iostream>
using namespace std;


int MaxD (int,int);
int MinM(int,int);
int main ()
{
    int Num1, Num2, Rta;
	
	cout<<"ingrese el primer numero: ";
	cin>>Num1;
	cout<<"ingrese el segundo numero: ";
	cin>>Num2;
	if (Num1>0 && Num2>0)
	{
		
		Rta=MinM(Num1, Num2);
		
		cout<<"El minimo comun multiplo es: "<<Rta<<endl;
	}
	else
	{
		cout<<"numero negativo"<<endl;
	}
	
	return 0;
}

int MinM(int N1,int N2)
{
    int Cont1, Cont2, Cont3, Prim, Rta=1, Div=0;
    
    Div=N1;
    for(Cont1=1;Cont1<=2;Cont1++)
    {
        Cont2=2;
        while (Div!=1)
        {
            for (Cont3=2; Cont3<=Cont2;Cont3++)
            {
                //cout<<"cont "<<Cont3<<endl;
                if (Cont2%Cont3==0)
                {
            
                    if (Cont3==Cont2)
                    {
                        Prim=Cont2;
                        //cout<<"1 ";
                    }
                    else
                    {
                        //cout<<"2 ";
                        break;
                    }
                
                }
        
            }
            if(Cont2==Prim)
            {
                while(Div%Prim==0)
                {
                    Div=Div/Prim;
                    Rta*=Prim;
                }
            }
            Cont2+=1;
        }
        Div=N2;
    }
    return Rta/MaxD (N1, N2);
}

int MaxD (int N1, int N2)
{
	int Cont1, Cont2;
	
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
	return 0;
}