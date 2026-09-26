#include <iostream>
using namespace std;

bool Palin(char[], int, int);

int main()
{
    int Digi;
    char Num[100];

    cout<<"Cuantos digitos va ha ingresar?: ";
    cin>>Digi;
    cout<<"ingrese el numero: ";
    cin>>Num;

    if (Palin(Num, Digi, Digi/2))
    {
        cout<<"el numero es palindromo ";
    }
    else
    {
        cout<<"el numero no es palindromo ";
    }
}

bool Palin(char Tes[], int Lim, int Paso)
{
    bool Rta;

    if (Paso==0)
    {
        Rta=true;
    }
    else
    {
        if (Tes[Paso-1]==Tes[Lim-Paso] && Palin(Tes, Lim, Paso-1))
        {
            Rta=true;
        }
        else
        {
            Rta=false;
        }
    }
    return Rta;
}