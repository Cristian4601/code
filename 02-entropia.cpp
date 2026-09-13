#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int cantidad;

    cout << "Ingrese la cantidad de probabilidades: ";
    cin >> cantidad;

    double probabilidades[cantidad];

    double suma = 0;

    // Ingresar probabilidades
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la probabilidad " << i + 1 << ": ";
        cin >> probabilidades[i];

        suma += probabilidades[i];
    }

    // Verificar que las probabilidades sean validas
    if (suma != 1.0) {
        cout << "\nError: las probabilidades deben sumar 1." << endl;
        cout << "La suma ingresada fue: " << suma << endl;
        return 1;
    }

    double entropia = 0;

    // Calcular la entropia
    for (int i = 0; i < cantidad; i++) {

        if (probabilidades[i] > 0) {

            // log2(p) = log(p) / log(2)
            entropia += probabilidades[i] *
                        (log(probabilidades[i]) / log(2));
        }
    }

    entropia = -entropia;

    cout << "\n--- Resultado ---" << endl;
    cout << "Entropia del sistema: "
         << entropia << " bits" << endl;

    return 0;
}