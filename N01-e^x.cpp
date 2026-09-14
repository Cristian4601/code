#include <iostream>
#include <math.h>

using namespace std;

float calcularEx(float, int);
float Potencia(float, int);
float Facto(int ValA);

float calcularError(float, float);

int main()
{
    int Term, Opc;
    float Num, Rta, TRta;

    cout<<"ingrese un numero: ";
    cin>>Num;
    cout<<"ingrese cantidad de terminos: ";
    cin>>Term;

    if(Term>0)
    {
        cout<<"1) e^x"<<endl;
        cout<<"2) e^{-x}"<<endl;
        cout<<"3) e^{2x}"<<endl;
        cout<<"-----> ";
        cin>>Opc;

        switch(Opc)
        {
        case 2:
            
            Num*=-1;
            break;

        case 3:

            Num*=2;
            break;

        }
        if(Opc>0 && Opc<4)
        {
            Rta=calcularEx(Num, Term);
            TRta=(float)exp(Num);
            cout<<"la respuesta externa es:"<<Rta<<endl;
            cout<<"la respuesta interna es:"<<TRta<<endl;
            cout<<"el error absoluto es:"<<calcularError(TRta, Rta)<<endl;

        }
        else
        {
            cout<<"dato invalido"<<endl;
        }
    }
    else
    {
        cout<<"dato invalido"<<endl;
    }
    
}

float calcularEx(float N1, int Term)
{
    int Cont;
    float Rta=0, ValF;
    for(Cont=0;Cont<=Term-1;Cont++)
    {
        ValF=Facto(Cont);
        if(isinf(ValF)!=0)
        {
            return Rta;
        }
        Rta+=Potencia(N1,Cont)/ValF;
        cout<<"-"<<Cont<<"- "<<Rta<<endl;
    }
    return Rta;
}

float Potencia(float N1, int N2)
{
	int Cont, Lim;
	float Pot=1, RtaP;
	
    if(N2==0)
    {
        return 1;
    }

	if (N2<0)
	{
		Lim=N2*-1;
	}
	else
	{
		Lim=N2;
	}
	
	for(Cont=1;Cont<=Lim;Cont++)
	{
		Pot*=N1;
	}
	if (N2<0)
	{
		RtaP=1/Pot;
	}
	else
	{
		RtaP=Pot;
	}
    cout<<"P "<<RtaP<<endl;
	return RtaP;
}

float Facto(int ValA)
{
    if(ValA==0)
    {
        return 1;
    }

	int ContFac;
	float ValC=1;
	for (ContFac=1;ContFac<=ValA;ContFac++)
	{
		ValC*=ContFac;
	}
	cout<<"F "<<ValC<<endl;
	return ValC;
}

float calcularError(float Real, float Desviado)
{
    return fabs(Real - Desviado);
}