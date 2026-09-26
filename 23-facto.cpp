#include <iostream>
using namespace std;

long Facto(int ValA);

int main()
{
    int Digi;

    cout << "ingrese un numero: ";
    cin >> Digi;

    
    cout << "el factorial es: " << Facto(Digi) << endl;
    
    return 0;
}
long Facto(int ValA)
{
	if (ValA == 0)
	{
		return 1;
	}
	else
	{
		return ValA * Facto(ValA - 1);
	}	
}