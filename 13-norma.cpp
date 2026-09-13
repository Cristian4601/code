#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

float numeroNormal() {
    float u1, u2;

    u1 = (float)rand() / RAND_MAX;
    u2 = (float)rand() / RAND_MAX;

    if (u1 == 0)
        u1 = 0.0001;

    float z = sqrt(-2 * log(u1)) * cos(2 * M_PI * u2);

    return z;
}

int main() {

    srand(time(NULL));

    int cantidad;

    cout << "Cantidad de numeros a generar: ";
    cin >> cantidad;

    cout << "\nNumeros con distribucion normal:\n";

    for (int i = 0; i < cantidad; i++) {
        cout << numeroNormal() << endl;
    }

    return 0;
}