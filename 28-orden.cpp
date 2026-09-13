#include <iostream>

using namespace std;

void ordenarSeleccion(int arreglo[], int cantidad, int indice) {

    // Caso base
    if (indice == cantidad - 1) {
        return;
    }

    int posicionMinimo = indice;

    for (int i = indice + 1; i < cantidad; i++) {

        if (arreglo[i] < arreglo[posicionMinimo]) {
            posicionMinimo = i;
        }
    }

    int temporal = arreglo[indice];
    arreglo[indice] = arreglo[posicionMinimo];
    arreglo[posicionMinimo] = temporal;

    // Llamada recursiva
    ordenarSeleccion(arreglo, cantidad, indice + 1);
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

    ordenarSeleccion(arreglo, cantidad, 0);

    cout << "\n--- Arreglo ordenado ---\n";

    for (int i = 0; i < cantidad; i++) {
        cout << arreglo[i] << " ";
    }

    cout << endl;

    return 0;
}