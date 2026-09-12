#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int Cont1, Cont2, Cara1=0, Cara2=0, Cara3=0, Cara4=0, Cara5=0, Cara6=0, Dado, Limt=1000;

    srand(time(NULL));

    for(Cont1=1;Cont1<=2;Cont1++)
    {
        for(Cont2=1;Cont2<=Limt;Cont2++)
        {
            Dado=rand()%6+1;

            switch (Dado)
            {
            case 1:
                Cara1+=1;
                break;

            case 2:
                Cara2+=1;
                break;

            case 3:
                Cara3+=1;
                break;

            case 4:
                Cara4+=1;
                break;

            case 5:
                Cara5+=1;
                break;

            case 6:
                Cara6+=1;
                break;
            }
        }

        cout<<"\tdado "<<Cont1<<endl;
        cout<<"cara1: "<<Cara1<<endl;
        cout<<"cara2: "<<Cara2<<endl;
        cout<<"cara3: "<<Cara3<<endl;
        cout<<"cara4: "<<Cara4<<endl;
        cout<<"cara5: "<<Cara5<<endl;
        cout<<"cara6: "<<Cara6<<endl;

    }


    return 0;
}