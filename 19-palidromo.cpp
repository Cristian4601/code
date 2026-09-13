#include <iostream>
using namespace std;

bool paalin(int, char[]);

int main()
{
    int Digi;
    char Num[100];
    bool Rta=false;

    cout<<"Cuantos digitos va ha ingresar?: ";
    cin>>Digi;
    cout<<"ingrese el numero: ";
    cin>>Num;

    Rta=paalin(Digi, Num);
    if (Rta==true)
    {
        cout<<"el numero es palindromo ";
    }
    else
    {
        cout<<"el numero no es palindromo ";
    }


}

bool paalin(int N1, char tes[])
{
    int Limt ,ContU, ContD;
    bool Rta=false;
    if(N1%2==0)
    {
        Limt=N1/2;
    }
    else
    {
        Limt=(N1-1)/2;
    }
    ContD=Limt;

    for(ContU=0;ContU<=Limt;ContU++)
    {
        //cout<<N1-ContU<<" "<<tes[N1-ContU-1]<<endl;
        //cout<<ContU<<" "<<tes[ContU]<<endl;
        ContD--;
        if(tes[ContU]==tes[N1-ContU-1])
        {
            Rta=true;
        }
        else
        {
            Rta=false;
            break;
        }

    }
    return Rta;
}
