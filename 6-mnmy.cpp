#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main() {
    string texto;
    int i;

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    string mayusculas = texto;
    string minusculas = texto;
    
    for (i=0;i<mayusculas.length();i++) {
        mayusculas[i] = toupper(mayusculas[i]);
    }

    for (i=0;i<minusculas.length();i++) {
        minusculas[i] = tolower(minusculas[i]);
    }

    cout << "\nTexto original: " << texto << endl;
    cout << "En mayusculas: " << mayusculas << endl;
    cout << "En minusculas: " << minusculas << endl;

    return 0;
}