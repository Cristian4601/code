#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;

int main()
{
    int Limt, Cont;
    char Contra[100], Digit;
    cout<<"cuantos caracteres"<<endl;
    cin>>Limt;

    srand(time(NULL));
    for(Cont=1;Cont<=Limt;Cont++)
    {
        Digit=rand()%93+34;
        char Digit1[2]={Digit, '\0'};
        strcat(Contra, Digit1);
        //cout<<Digit<<endl;
    }

    cout<<"la contrasena es: "<<Contra<<endl;
}