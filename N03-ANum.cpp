#include <iostream>
using namespace std;

bool esPrimo(int n);
int cantidadDigitos(int n);
int sumaDigitos(int n);
int productoDigitos(int n);
int digitoMayor(int n);
int digitoMenor(int n);
int invertirNumero(int n);
bool esCapicua(int n);
int sumaDivisores(int n);
bool esPerfecto(int n);

int main() {

    int num1;

    cout << "Ingrese el un numero entero positivo: ";
    cin >> num1;

    if (num1 <= 0) 
    {
        cout << "El numero debe ser positivo." << endl;
        return 0;
    }

   
    cout << "Es primo: ";
    if (esPrimo(num1))
    {
        cout<<"SI"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    cout<<"Cantidad de digitos: "<<cantidadDigitos(num1)<<endl;
    cout<<"Suma de digitos: "<<sumaDigitos(num1)<<endl;
    cout<<"Producto de digitos: "<<productoDigitos(num1)<<endl;
    cout<<"Digito mayor: "<<digitoMayor(num1)<<endl;
    cout<<"Digito menor: "<<digitoMenor(num1)<<endl;

    cout << "Es capicua: ";
    if (esCapicua(num1))
    {
        cout<<"SI"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
        cout<<"Numero invertido: "<<invertirNumero(num1)<<endl;
        cout<<"Es perfecto: ";
    }

    if (esPerfecto(num1))
    {
        cout<<"SI"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
    return 0;
}

bool esPrimo(int n) 
{

    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= n / i; i++) 
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int cantidadDigitos(int n) 
{

    int contador=0;

    while (n > 0) 
    {
        contador++;
        n=n/10;
    }

    return contador;
}

int sumaDigitos(int n) 
{

    int suma=0;

    while (n>0) 
    {
        suma=suma+n%10;
        n=n/10;
    }

    return suma;
}

int productoDigitos(int n) 
{

    int producto = 1;

    while (n > 0) 
    {
        producto=producto * (n % 10);
        n = n / 10;
    }

    return producto;
}

int digitoMayor(int n) 
{

    int mayor = 0;

    while (n > 0) 
    {

        int digito = n % 10;

        if (digito > mayor)
        {
            mayor = digito;
        }
        n = n / 10;
    }

    return mayor;
}

int digitoMenor(int n) 
{

    int menor = 9;

    while (n > 0) 
    {

        int digito = n % 10;

        if (digito < menor)
        {
            menor = digito;
        }
        n = n / 10;
    }

    return menor;
}

int invertirNumero(int n) 
{

    int invertido = 0;

    while (n > 0) 
    {

        int digito = n % 10;

        invertido = invertido * 10 + digito;

        n = n / 10;
    }

    return invertido;
}

bool esCapicua(int n) 
{

    return n==invertirNumero(n);
}


bool esPerfecto(int n) 
{

    return sumaDivisores(n)==n;
}

int sumaDivisores(int n) 
{

    int suma = 0;

    for (int i = 1; i <= n / 2; i++) {

        if (n % i == 0)
        {
            suma = suma + i;
        }
    }

    return suma;
}

