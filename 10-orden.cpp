#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Estudiante {
    char nombre[50];
    float nota;
};

int comparar(const void *a, const void *b) {
    Estudiante *e1 = (Estudiante*)a;
    Estudiante *e2 = (Estudiante*)b;

    if (e1->nota < e2->nota)
        return 1;
    else if (e1->nota > e2->nota)
        return -1;
    else
        return 0;
}

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;

    Estudiante estudiantes[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "\nNombre del estudiante " << i + 1 << ": ";
        cin >> estudiantes[i].nombre;

        cout << "Nota: ";
        cin >> estudiantes[i].nota;
    }

    qsort(estudiantes, cantidad, sizeof(Estudiante), comparar);

    cout << "\n--- Estudiantes ordenados por nota ---\n";

    for (int i = 0; i < cantidad; i++) {
        cout << estudiantes[i].nombre
             << " - Nota: " << estudiantes[i].nota << endl;
    }

    return 0;
}