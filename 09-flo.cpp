#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char b[]={};

    cout<<"ingrese un numero: ";
    cin>>b;    

    if (isdigit(b[0]))
    {
        cout<<"puede ser float";
    }
    else
    {
        cout<<"no puede ser float";
    }
}