#include <iostream>
using namespace std;

void Tabla (int[16][16]);

bool Vpos (int[16][16], int, int);

int main() 
{
    bool Sobre=true;
    char Point[3];
    int Cont1 ,Cont2 , Turn, PonX=-1 ,PonY=-1, Tabl[16][16]=
    {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
    
    };


    for (Cont1=1;true;Cont1++)
    {
        Tabla(Tabl);

        //turnos
        if(Cont1%2==0)
        {
            Turn=2;
        }
        else
        {
            Turn=1;
        }
        while(Sobre)
        {
            cout<<"turno del jugador "<<Turn<<endl<<"pocicion: ";
            cin>>Point;
        
            //pociociones
            for(Cont2=0;Cont2<3;Cont2++)
            {
                if (Point[Cont2]>=65 && Point[Cont2]<=80 && PonY==-1)
                {
                    PonY=Point[Cont2]-65;
                }
                else if (Point[Cont2]>=97 && Point[Cont2]<=112 && PonY==-1)
                {
                    PonY=Point[Cont2]-97;
                }
            
                if (Point[Cont2]>=48 && Point[Cont2]<=80 && PonX==-1)
                {
                    PonX=(Point[Cont2]-48)*10+Point[Cont2+1]-49;
                }
            
            }
            //cout<<PonX<<"  "<<PonY<<endl;

            //esritura
            if(Vpos (Tabl, PonX, PonY))
            {
                Tabl[PonX][PonY]=Turn;
                Sobre=false;
            }
            else
            {
                cout<<"POCICION INVALIDA"<<endl;
                Sobre=true;
            }
            PonX=-1;
            PonY=-1;
        }
        Sobre=true;


    }
    return 0;
}





void Tabla (int N1[16][16])
{
    int Indice1, Indice2;

    cout<<"      A    B    C    D    E    F    G    H    I    J    K    L    M    N    O    P"<<endl;
    for (Indice1=0;Indice1<16;Indice1++)
    {
        cout<<"      |    |    |    |    |    |    |    |    |    |    |    |    |    |    |    |"<<endl;
        if(Indice1<9)
        {
            cout<<"0";
        }
        cout<<Indice1+1;

        for (Indice2=0;Indice2<16;Indice2++)
        {
            switch (N1[Indice1][Indice2])
            {
            case 0:
                cout<<" --  ";
                break;
            
            case 1:
                cout<<" -- O"; 
                break;

            case 2:
                cout<<" -- @";
                break;
            }
        }
        cout<<" "<<endl;
    }                              
    
}

bool Vpos (int tab[16][16], int Px, int Py)
{
    bool rta=false;
    int Liber=0;

    if(tab[Px][Py]==0)
    {
        if(tab[Px-1][Py]==0 && Py!=0)
        {
            Liber+=1;
        }
        if(tab[Px][Py-1]==0 && Py!=0)
        {
            Liber+=1;
        }
        if(tab[Px+1][Py]==0 && Px!=15)
        {
            Liber+=1;
        }
        if(tab[Px][Py+1]==0 && Py!=15)
        {
            Liber+=1;
        }
        
        if (Liber>0)
        {
            rta=true;
        }
        
        
    }

    return rta;
}