#include <iostream>
using namespace std;

void Tabla (int[16][16]);

bool ChTab(int[16][16], int[16][16]);

bool Vpos (int[16][16], int, int, int);
int CaptI[16][16](int[16][16], int, int, int);

int main() 
{
    bool Valid=true;
    char Point[3];
    int Cont1 ,Cont2 , Turn, PonY=-1 ,PonX=-1, Tabl[16][16]=
    {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0},
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
            Turn=-1;
        }
        else
        {
            Turn=1;
        }
        while(Valid)
        {
            cout<<"turno del jugador "<<Turn<<endl<<"pocicion: ";
            cin>>Point;
        
            //pociociones
            for(Cont2=0;Cont2<3;Cont2++)
            {
                if (Point[Cont2]>=65 && Point[Cont2]<=80 && PonX==-1)
                {
                    PonX=Point[Cont2]-65;
                }
                else if (Point[Cont2]>=97 && Point[Cont2]<=112 && PonX==-1)
                {
                    PonX=Point[Cont2]-97;
                }
            
                if (Point[Cont2]>=48 && Point[Cont2]<=80 && Point[Cont2+1]>=48 && Point[Cont2+1]<=80 && PonY==-1)
                {
                    PonY=(Point[Cont2]-48)*10+Point[Cont2+1]-49;
                    //cout<<"1)  "<<PonX<<endl;
                }
                else if(Point[Cont2]>=48 && Point[Cont2]<=80 && PonY==-1)
                {
                    PonY=Point[Cont2]-49;
                    //cout<<Point[Cont2]<<"2)  "<<PonX<<endl;
                }
            
            }
            cout<<PonY<<"  "<<PonX<<endl;

            Tabl=CaptI(Tabl, PonY, PonX, Turn);

            //esritura
            if(Vpos (Tabl, PonY, PonX, Turn) && PonY<16 && PonY!=-1 && PonX!=-1)
            {
                Tabl[PonY][PonX]=Turn;
                Valid=false;
            }
            else
            {
                cout<<"POCICION INVALIDA"<<endl;
                Valid=true;
            }
            PonY=-1;
            PonX=-1;
        }
        Valid=true;


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

            case -1:
                cout<<" -- @";
                break;
            }
        }
        cout<<" "<<endl;
    }                              
    
}

bool ChTab(int N1[16][16], int N2[16][16])
{
    int Indice1, Indice2;
    bool rta=true;


    for (Indice1=0;Indice1<16;Indice1++)
    {
        for (Indice2=0;Indice2<16;Indice2++)
        {
            if (N1[Indice1][Indice2] != N2[Indice1][Indice2])
            {
                rta=true;
                break;
            }
            
        }
        if(!rta)
        {
            break;
        }
    }
    return rta;                              
}

bool Vpos (int Tab[16][16], int Py, int Px, int Tn)
{
    bool rta=false;
    int Liber=0;

    if(Tab[Py][Px]==0)
    {
        if((Tab[Py-1][Px]==0 || Tab[Py-1][Px]==Tn) && Px!=0)
        {
            Liber+=1;
        }
        if((Tab[Py][Px-1]==0 || Tab[Py][Px-1]==Tn) && Px!=0)
        {
            Liber+=1;
        }
        if((Tab[Py+1][Px]==0 || Tab[Py+1][Px]==Tn) && Py!=15)
        {
            Liber+=1;
        }
        if((Tab[Py][Px+1]==0 || Tab[Py][Px+1]==Tn) && Px!=15)
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

int CaptI[16][16](int Tab[16][16], int Py, int Px, int Tn)
{
    bool fin=false, libre;
    int Min, Max, Cont;
    if(Tab[Py][Px-1]==Tn*-1)
    {
        Max=Px-1;
        cout<<" ----"<<Py-1<<endl;

        for (Cont=Max;!fin;Cont--)
        {
            if(Tab[Py][Px-Cont]==Tn*-1)
            {
                Min=Px-Cont;
            }
            else if (Tab[Py][Px-Cont]==Tn)
            {
                //revicion pendiente

                fin=true;
                libre=false;
            }
            else
            {
                fin=true;
                libre=true;
            }
            
        }
        fin=false;
    }
    



    return Tab;
}