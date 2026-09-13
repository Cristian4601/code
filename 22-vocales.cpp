#include <iostream>
#include <string>
using namespace std;

int contarVocales(string, int);

int main() 
{
    string cadena;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    cout << "Cantidad de vocales: " << contarVocales(cadena) << endl;

    return 0;
}

int contarVocales(string cadena, int posicion = 0) 
{
    
    if (posicion == cadena.length()) 
    {
        return 0;
    }

    char c = tolower(cadena[posicion]);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
    {
        return 1 + contarVocales(cadena, posicion + 1);
    }

    return contarVocales(cadena, posicion + 1);
}
