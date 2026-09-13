#include <iostream>

using namespace std;

void torresHanoi(int n, char origen, char auxiliar, char destino) {

    // Caso base
    if (n == 1) {
        cout << "Mover disco 1 desde "<< origen << " hacia "<< destino << endl;

        return;
    }

    // Mover n-1 discos al auxiliar
    torresHanoi(n - 1, origen, destino, auxiliar);

    // Mover el disco mayor al destino
    cout << "Mover disco " << n
         << " desde " << origen
         << " hacia " << destino << endl;

    // Mover los n-1 discos al destino
    torresHanoi(n - 1, auxiliar, origen, destino);
}

int main() {

    int n;

    cout << "Ingrese la cantidad de discos: ";
    cin >> n;

    if (n <= 0) {
        cout << "La cantidad debe ser positiva." << endl;
        return 1;
    }

    cout << "\n--- Movimientos ---\n";

    torresHanoi(n, 'A', 'B', 'C');

    return 0;
}