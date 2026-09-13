#include <iostream>
using namespace std;

char* Inversa(int N, char C[]);  // ✅ Function pointer or return type

int main()
{
    int Digi;
    char Carac[100];

    cout << "ingrese cadena de caracteres: ";
    cin >> Carac;
    cout << "Cuantos caracteres contiene?: ";
    cin >> Digi;

    Inversa(Digi, Carac);  // Call the function and pass parameters
    
    cout << "la inversa es: " << Carac << endl;
    
    return 0;
}

// Function definition
char* Inversa(int N, char C[])
{
    // Reverse logic here
    for (int i = 0; i < N / 2; i++)
    {
        char temp = C[i];
        C[i] = C[N - 1 - i];
        C[N - 1 - i] = temp;
    }
    return C;
}