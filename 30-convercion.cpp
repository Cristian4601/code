#include <iostream>

using namespace std;


void convertirBinario(int);
int main() {

    int numero;

    cout<<"Ingrese un numero entero positivo:";
    cin>>numero;

    if(numero < 0) 
    {
        cout<<"El numero debe ser positivo."<<endl;
    }

    cout<<"Representacion binaria: "<<endl;

    if (numero == 0) 
    {
        cout<<"0";
    } 
    else 
    {
        convertirBinario(numero);
    }

    return 0;
}

void convertirBinario(int numero) {

    if (numero > 1) 
    {
        convertirBinario(numero / 2);
    }

    cout << numero % 2;
}