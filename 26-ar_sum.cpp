#include <iostream>

using namespace std;

int sumarArreglo(int arreglo[], int cantidad, int indice) {

    if (indice == cantidad) {
        return 0;
    }

    return arreglo[indice] +
           sumarArreglo(arreglo, cantidad, indice + 1);
}

int main() {

    int cantidad;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> cantidad;

    int arreglo[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    int suma = sumarArreglo(arreglo, cantidad, 0);

    cout << "\nLa suma de los elementos es: "
         << suma << endl;

    return 0;
}