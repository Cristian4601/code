#include <iostream>
#include <cstdlib>

using namespace std;

int comparar(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    else
        return 0;
}

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    int numeros[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Primero ordenamos el arreglo
    qsort(numeros, cantidad, sizeof(int), comparar);

    cout << "\nArreglo ordenado:\n";

    for (int i = 0; i < cantidad; i++) {
        cout << numeros[i] << " ";
    }

    int buscado;

    cout << "\n\nIngrese el numero que desea buscar: ";
    cin >> buscado;

    int *resultado = (int*)bsearch(
        &buscado,
        numeros,
        cantidad,
        sizeof(int),
        comparar
    );

    if (resultado != NULL) {
        cout << "El numero " << buscado << " fue encontrado." << endl;
    } else {
        cout << "El numero " << buscado << " no fue encontrado." << endl;
    }

    return 0;
}