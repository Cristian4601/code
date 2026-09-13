#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

struct Palabra {
    char palabra[50];
    int frecuencia;
};

int buscarPalabra(Palabra palabras[], int cantidad, const char palabra[]) {
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(palabras[i].palabra, palabra) == 0) {
            return i;
        }
    }

    return -1;
}

int main() {
    FILE *archivo;

    archivo = fopen("texto.txt", "r");

    if (archivo == NULL) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    Palabra palabras[100];
    int cantidad = 0;

    char linea[500];

    while (fgets(linea, sizeof(linea), archivo) != NULL) {

        char *token = strtok(linea, " ,.;:!?¿¡\n");

        while (token != NULL) {

            for (int i = 0; token[i] != '\0'; i++) {
                token[i] = tolower(token[i]);
            }

            int posicion = buscarPalabra(palabras, cantidad, token);

            if (posicion == -1) {
                strcpy(palabras[cantidad].palabra, token);
                palabras[cantidad].frecuencia = 1;
                cantidad++;
            } else {
                palabras[posicion].frecuencia++;
            }

            token = strtok(NULL, " ,.;:!?¿¡\n");
        }
    }

    fclose(archivo);

    cout << "\n--- Frecuencia de palabras ---\n";

    for (int i = 0; i < cantidad; i++) {
        cout << palabras[i].palabra
             << " : "
             << palabras[i].frecuencia
             << endl;
    }

    return 0;
}