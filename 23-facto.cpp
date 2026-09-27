#include <iostream>
using namespace std;

long Facto(int ValA);

int main()
{
    int Digi;

    cout << "ingrese un numero: ";
    cin >> Digi;

    if (Digi < 0)
	{
		cout << "No se puede calcular el factorial de un numero negativo." << endl;
	}
	else
	{
		cout << "el factorial es: " << Facto(Digi) << endl;
	}
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