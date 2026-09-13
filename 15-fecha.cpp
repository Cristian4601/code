#include <iostream>
#include <ctime>

using namespace std;

int main() {

    time_t tiempoActual;
    time(&tiempoActual);

    tm *fecha = localtime(&tiempoActual);

    char formato1[100];
    char formato2[100];
    char formato3[100];

    // Formato latino
    strftime(
        formato1,
        sizeof(formato1),
        "%d/%m/%Y",
        fecha
    );

    // Formato estadounidense
    strftime(
        formato2,
        sizeof(formato2),
        "%m/%d/%Y",
        fecha
    );

    // Formato internacional ISO
    strftime(
        formato3,
        sizeof(formato3),
        "%Y-%m-%d",
        fecha
    );

    cout << "Fecha actual:\n\n";

    cout << "Formato latino:       " << formato1 << endl;
    cout << "Formato estadounidense: " << formato2 << endl;
    cout << "Formato internacional:  " << formato3 << endl;

    return 0;
}