#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double Num1, Num2, Loga, Cont, Rta;
	int Term, Num3, Num4;
	
	cout<<"ingrese el primer numero: ";
	cin>>Num1;
	cout<<"Ingrese cantidad de terminos: ";
	cin>>Term;
	
	for(Cont=1;Cont<=Term;Cont++)
	{
		Num2=pow(Num1,Cont);
		Num3=(int)Num2;
		Num4=Num3%10;
		Loga=Num4*log(Num4)/log(2);
		
		Rta+=-Loga;
	
	
	}	
	
	cout<<"la respuesta es: "<<Rta<<endl;
	
	return 0;
}
