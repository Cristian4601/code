#include <iostream>
using namespace std;

int Facto(int ValA);

int main()
{
    int Digi;

    cout << "ingrese un numero: ";
    cin >> Digi;

    
    cout << "el factorial es: " << Facto(Digi) << endl;
    
    return 0;
}
int Facto(int ValA)
{
	int ContFac;
	float ValC=1;
	for (ContFac=1;ContFac<=ValA;ContFac++)
	{
		ValC*=ContFac;
	}
	//cout<<"C "<<ValC<<endl;
	return ValC;
}