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
	int ContFac;
	float ValC=1;
	for (ContFac=1;ContFac<=ValA;ContFac++)
	{
		ValC*=ContFac;
		cout<<"-"<<ContFac<<"- "<<ValC<<endl;
	}
	//cout<<"C "<<ValC<<endl;
	return ValC;
}