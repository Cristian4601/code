#include <iostream>
using namespace std;

int Suma (char[], int);
int main() 
{ 
    char Fras[100]={};
    int Lim;

    cout<<"Ingrese un numero: ";
    cin>>Fras;
    cout<<"cuantos digiyos tiene?: ";
    cin>>Lim;

   

    cout<<"la suma de los caracteres son: "<<Suma(Fras, Lim-1)<<endl;
}

int Suma (char Fras[], int Lim)
{
    int Rta;
    if (Lim==-1)
    {
        Rta=0;
    }
    else
    {
        //cout<<"num: "<<(int)Fras[Lim]-48<<endl;
        if((int)Fras[Lim]>=48 && (int)Fras[Lim]<=57)
        {
            cout<<"num: "<<(int)Fras[Lim]<<endl;
            Rta=(int)Fras[Lim]-48+Suma (Fras, Lim-1);
        }
    }
    return Rta;
}