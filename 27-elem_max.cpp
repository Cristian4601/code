#include <iostream>

using namespace std;

int maximoArreglo(int arreglo[], int cantidad, int indice) 
{

    if (indice == cantidad - 1) {
        return arreglo[indice];
    }

    int maximoRestante = maximoArreglo(arreglo, cantidad, indice + 1);

    if (arreglo[indice] > maximoRestante) {
        return arreglo[indice];
    } else {
        return maximoRestante;
    }
}

int main() 
{

    int cantidad;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> cantidad;

    int arreglo[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    int maximo = maximoArreglo(arreglo, cantidad, 0);

    cout << "\nEl valor maximo es: "
         << maximo << endl;

    return 0;
}