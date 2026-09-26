#include <iostream>
using namespace std;

float Potencia(float, int);

int main()
{
    int Digi, Num1;

    cout << "ingrese una base: ";
    cin >> Digi;
    cout << "ingrese un exponente: ";
    cin >> Num1;

    
    cout << "la potencia es: " << Potencia(Digi, Num1) << endl;
    
    return 0;
}

float Potencia(float N1, int N2)
{
	int Lim;
	float Pot=1, RtaP;
	
	if (N2<0)
	{
		Lim=N2*-1;
	}
	else
	{
		Lim=N2;
	}
	
	if (Lim==0)
	{
		Pot=1;
	}
	else
	{
		Pot=N1*Potencia(N1, Lim-1);
	}
	
	if (N2<0)
	{
		RtaP=1/Pot;
	}
	else
	{
		RtaP=Pot;
	}
	return RtaP;
}