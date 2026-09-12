#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    double media, suma = 0, sumaCuadrados = 0, desviacion;

    cout << "Ingrese la cantidad de datos: ";
    cin >> n;

    double datos[n];
    


    for (int i = 0; i < n; i++) 
    {
        cout << "Ingrese el dato " << i + 1 << ": ";
        cin >> datos[i];
        suma += datos[i];
    }

    media = suma / n;


    for (int i = 0; i < n; i++) 
    {
        sumaCuadrados += pow(datos[i] - media, 2);
        //cout <<sumaCuadrados<<endl;
    }


    desviacion = sqrt(sumaCuadrados / n);

    cout << "\nMedia: " << media << endl;
    cout << "Desviacion estandar: " << desviacion << endl;

    return 0;
}
