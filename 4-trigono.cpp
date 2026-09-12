#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int Num1;
    double Rad;

    cout<<"ingrese un grado: ";
	cin>>Num1;

    Rad=Num1*3.1416/180;

    cout<<"sen("<<Rad<<") = "<<sin(Rad)<<endl;
    cout<<"cos("<<Rad<<") = "<<cos(Rad)<<endl;
    cout<<"tan("<<Rad<<") = "<<tan(Rad)<<endl;
}