#include <iostream>
using namespace std;

int Fivo(int);
int main() 
{
    int Rep;
    cout<<"Ingrese un numero:";
    cin>>Rep;

    cout<<"el "<<Rep<<" numro de fibonacci es: "<<Fivo(Rep)<<endl;
    return 0;
}


int Fivo(int N1)
{
    int Cont, Num1=0, Num2=1, Num3=0;

    for (Cont=1;Cont<=N1;Cont++)
    {
        Num3=Num1+Num2;
        Num1=Num2;
        Num2=Num3;
    }
    return Num3;
}