#include <iostream>
#include <math.h>
using namespace std;

void Opcion();
float Compuesto();

float Suma(float,float);
float Resta(float,float);
float Multi(float,float);
float Divi(float,float);
float Potencia(float, int);
float Facto(int);
float promedio(float [], int );

int main()
{
	float Rta=Compuesto();
	if(isinf(Rta)!=0)
    {
        cout<<"syntax error"<<endl;
    }
	else
	{
		cout<<"la respuesta es: "<<Rta;
	}
}

float Suma(float A,float B)
{
    return A+B;
}

float Resta(float A,float B)
{
    return A-B;
}

float Multi(float A,float B)
{
    return A*B;
}

float Divi(float A ,float B)
{
	
	return A/B;
}

float Potencia(float A, int B)
{
	int Cont, Lim;
	float Pot=1, RtaP;
	
	if (B<0)
	{
		Lim=B*-1;
	}
	else
	{
		Lim=B;
	}
	
	for(Cont=1;Cont<=Lim;Cont++)
	{
		Pot*=A;
	}
	if (B<0)
	{
		RtaP=1/Pot;
	}
	else
	{
		RtaP=Pot;
	}
	return RtaP;
}

float Facto(int A)
{
	if (A<0)
	{
		return Divi(1 ,0);
	}
    if(A==0)
    {
        return 1;
    }

	int ContFac;
	float ValC=1;
	for (ContFac=1;ContFac<=A;ContFac++)
	{
		ValC*=ContFac;
	}
	//cout<<"F "<<ValC<<endl;
	return ValC;
}

void Opcion()
{
	cout<<"1) Numero"<<endl;
	cout<<"2) Compuesto"<<endl;
	cout<<"--->";
}

float promedio(float arreglo[], int cantidad)
{
	float suma = 0;
	for (int i = 0; i < cantidad; i++) 
	{
        suma += arreglo[i];
	}
	return suma / cantidad;
}


float Compuesto()
{
	int Opc1, OpcA, OpcB, cantidad;
	float ValA, ValB;
    
    cout<<"1) suma \t \t (a+b)"<<endl;
    cout<<"2) resta \t \t (a-b)"<<endl;
    cout<<"3) Multiplicacion \t (a*b)"<<endl;
    cout<<"4) Divicion \t \t (a/b)"<<endl;
    cout<<"5) Potencia \t \t (a^b)"<<endl;
    cout<<"6) Factorial\t \t (a!)"<<endl;
    cout<<"7) Promedio"<<endl;
    cout<<"--->";
    cin>>Opc1;

	switch(Opc1)
	{
		case 1:
		cout<<"\t \t (a+b)"<<endl;
		cout<<"----a----"<<endl;
		Opcion();
    	cin>>OpcA;
		switch(OpcA)
		{
			case 1:
			cout<<"a=";
			cin>>ValA;
			break;

			case 2:
			ValA=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}

		cout<<"----b----"<<endl;
		Opcion();
    	cin>>OpcB;
		switch(OpcB)
		{
			case 1:
			cout<<"b=";
			cin>>ValB;
			break;

			case 2:
			ValB=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}
		return Suma(ValA,ValB);
		break;

		case 2:

		cout<<"\t \t (a-b)"<<endl;
		Opcion();
    	cin>>OpcA;
		switch(OpcA)
		{
			case 1:
			cout<<"a=";
			cin>>ValA;
			break;

			case 2:
			ValA=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}

		cout<<"----b----"<<endl;
		Opcion();
    	cin>>OpcB;
		switch(OpcB)
		{
			case 1:
			cout<<"b=";
			cin>>ValB;
			break;

			case 2:
			ValB=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}
		return Resta(ValA,ValB);
		break;

		case 3:

		cout<<"\t \t (a*b)"<<endl;
		Opcion();
    	cin>>OpcA;
		switch(OpcA)
		{
			case 1:
			cout<<"a=";
			cin>>ValA;
			break;

			case 2:
			ValA=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}

		cout<<"----b----"<<endl;
		Opcion();
    	cin>>OpcB;
		switch(OpcB)
		{
			case 1:
			cout<<"b=";
			cin>>ValB;
			break;

			case 2:
			ValB=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}
		return Multi(ValA,ValB);
		break;

		case 4:

		cout<<"\t \t (a/b)"<<endl;
		Opcion();
    	cin>>OpcA;
		switch(OpcA)
		{
			case 1:
			cout<<"a=";
			cin>>ValA;
			break;

			case 2:
			ValA=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}

		cout<<"----b----"<<endl;
		Opcion();
    	cin>>OpcB;
		switch(OpcB)
		{
			case 1:
			cout<<"b=";
			cin>>ValB;
			break;

			case 2:
			ValB=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}
		return Divi(ValA,ValB);
		break;

		case 5:

		cout<<"\t \t (a^b)"<<endl;
		Opcion();
    	cin>>OpcA;
		switch(OpcA)
		{
			case 1:
			cout<<"a=";
			cin>>ValA;
			break;

			case 2:
			ValA=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}

		cout<<"----b----"<<endl;
		Opcion();
    	cin>>OpcB;
		switch(OpcB)
		{
			case 1:
			cout<<"b=";
			cin>>ValB;
			break;

			case 2:
			ValB=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}
		return Potencia(ValA,ValB);
		break;

		case 6:

		cout<<"\t \t (a!)"<<endl;
		Opcion();
    	cin>>OpcA;
		switch(OpcA)
		{
			case 1:
			cout<<"a=";
			cin>>ValA;
			break;

			case 2:
			ValA=Compuesto();
			break;

			default:
			cout<<"dato invalido";
			return 0;
		}
		return Facto(ValA);
		break;

		case 7:
		cout << "Ingrese la cantidad de elementos: ";
   	 	cin >> cantidad;

    	float* arreglo = new float[cantidad];

    	for (int i = 0; i < cantidad; i++) 
		{
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    	}
		return promedio(arreglo, cantidad);
		
		break;

	}
	return 0;
}
