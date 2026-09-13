#include <iostream>
#include <string.h>
using namespace std;

int Suma (char[]);
int main() 
{ 
    char Fras[100]={};

    cout<<"Ingrese un numero: ";
    cin>>Fras;
    //cout<<Fras<<endl;

   

    cout<<"la suma de los caracteres son: "<<Suma(Fras)<<endl;
}

int Suma (char Fras[])
{
    int Cont1, Num=0, Limt;

    Limt=sizeof(Fras) / sizeof(Fras[0]);
    //cout<<Limt<<endl;

    for(Cont1=0;Cont1<=Limt;Cont1++)
    {
        //cout<<Cont1<<endl;
        //cout<<"Numero "<<(int)Fras[Cont1]-48<<endl;
        if((int)Fras[Cont1]>=48 && (int)Fras[Cont1]<=58)
        {
            Num+=(int)Fras[Cont1]-48;
        }
    }
    return Num;
}