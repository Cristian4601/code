#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int Vec[150], Cont1, Cont2, Aux, Spc, Num, Inter, Srch;
	bool  ObjF=false;
	
	srand(time(NULL));
	
	for(Cont1=0;Cont1<150;Cont1++)
	{
		Vec[Cont1]=rand()%300+1;
	}
	
	for(Cont1=0;Cont1<149;Cont1++)
	{
		Spc=Cont1;
		for(Cont2=Cont1;Cont2<150;Cont2++)
		{
			if(Vec[Cont2]<Vec[Spc])
			{
				Spc=Cont2;
			}
		}
		Aux=Vec[Spc];
		Vec[Spc]=Vec[Cont1];
		Vec[Cont1]=Aux;
	}
	
	for(Cont1=0;Cont1<150;Cont1++)
	{
		cout<<Vec[Cont1]<<" ";
	}
	
	cout<<endl<<"digite un numero a buscar: ";
	cin>>Num;
	
	Spc=0;
	for(Cont1=75;!(ObjF);Cont1=Cont1/2)
	{
		if(Vec[Cont1+Spc-1]==Num)
		{
			Srch=Cont1+Spc-1;
			ObjF=true;
		}
		else if (Vec[Cont1+Spc-1]<Num)
		{
			Spc+=Cont1;
		}
		if(Cont1==1)
		{
			break;
		}
		
		//cout<<Spc<<" prueba"<<endl;
		//cout<<Vec[Cont1+Spc]<<" prueba1 "<<Cont1<<" valor "<<Cont1+Spc<<endl;cin>>Cont2;	
	}
	if(ObjF)
	{
		cout<<Vec[Srch]<<" escontrado "<<Srch;
	}
	else
	{
		cout<<"no escontrado "<<endl;
	}
	
	
}
