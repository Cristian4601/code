#include <iostream>

using namespace std;

void convertirBinario(int numero) {

    if (numero > 1) {
        convertirBinario(numero / 2);
    }

    cout << numero % 2;
}

int main() {

    int numero;

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El numero debe ser positivo." << endl;
        return 1;
    }

    cout << "Representacion binaria: ";

    if (numero == 0) {
        cout << "0";
    } else {
        convertirBinario(numero);
    }

    cout << endl;

    return 0;
}