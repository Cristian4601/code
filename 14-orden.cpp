#include <iostream>
#include <cstring>

using namespace std;

void ordenarNombres(char nombres[][50], int cantidad) {

    char temporal[50];

    for (int i = 0; i < cantidad - 1; i++) {

        for (int j = i + 1; j < cantidad; j++) {

            if (strcmp(nombres[i], nombres[j]) > 0) {

                strcpy(temporal, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], temporal);
            }
        }
    }
}

int main() {

    int cantidad;

    cout << "Ingrese la cantidad de nombres: ";
    cin >> cantidad;

    char nombres[cantidad][50];

    for (int i = 0; i < cantidad; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }

    ordenarNombres(nombres, cantidad);

    cout << "\n--- Nombres ordenados alfabeticamente ---\n";

    for (int i = 0; i < cantidad; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}