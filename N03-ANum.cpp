#include <iostream>
using namespace std;

bool esPrimo(int n);
int cantidadDigitos(int n);
int sumaDigitos(int n);
int productoDigitos(int n);
int digitoMayor(int n);
int digitoMenor(int n);
int invertirNumero(int n);
bool esCapicua(int n);
int cantidadDivisores(int n);
int sumaDivisores(int n);
bool esPerfecto(int n);
bool sonAmigos(int a, int b);

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero entero positivo: ";
    cin >> num1;

    cout << "Ingrese el segundo numero entero positivo: ";
    cin >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Los numeros deben ser positivos." << endl;
        return 0;
    }

    cout << "\nNumero 1: " << num1 << endl;

    cout << "Es primo: ";
    if (esPrimo(num1)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Cantidad de digitos: " << cantidadDigitos(num1) << endl;
    cout << "Suma de digitos: " << sumaDigitos(num1) << endl;
    cout << "Producto de digitos: " << productoDigitos(num1) << endl;
    cout << "Digito mayor: " << digitoMayor(num1) << endl;
    cout << "Digito menor: " << digitoMenor(num1) << endl;

    cout << "Es capicua: ";
    if (esCapicua(num1)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Numero invertido: " << invertirNumero(num1) << endl;
    cout << "Cantidad de divisores: " << cantidadDivisores(num1) << endl;

    cout << "Es perfecto: ";
    if (esPerfecto(num1)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "\nNumero 2: " << num2 << endl;

    cout << "Es primo: ";
    if (esPrimo(num2)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Cantidad de digitos: " << cantidadDigitos(num2) << endl;
    cout << "Suma de digitos: " << sumaDigitos(num2) << endl;
    cout << "Producto de digitos: " << productoDigitos(num2) << endl;
    cout << "Digito mayor: " << digitoMayor(num2) << endl;
    cout << "Digito menor: " << digitoMenor(num2) << endl;

    cout << "Es capicua: ";
    if (esCapicua(num2)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Numero invertido: " << invertirNumero(num2) << endl;
    cout << "Cantidad de divisores: " << cantidadDivisores(num2) << endl;

    cout << "Es perfecto: ";
    if (esPerfecto(num2)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "\nComparacion:" << endl;

    if (cantidadDigitos(num1) > cantidadDigitos(num2)) {
        cout << "Mayor cantidad de digitos: " << num1 << endl;
    } else if (cantidadDigitos(num2) > cantidadDigitos(num1)) {
        cout << "Mayor cantidad de digitos: " << num2 << endl;
    } else {
        cout << "Ambos tienen la misma cantidad de digitos." << endl;
    }

    if (sumaDigitos(num1) > sumaDigitos(num2)) {
        cout << "Mayor suma de digitos: " << num1 << endl;
    } else if (sumaDigitos(num2) > sumaDigitos(num1)) {
        cout << "Mayor suma de digitos: " << num2 << endl;
    } else {
        cout << "Ambos tienen la misma suma de digitos." << endl;
    }

    if (productoDigitos(num1) > productoDigitos(num2)) {
        cout << "Mayor producto de digitos: " << num1 << endl;
    } else if (productoDigitos(num2) > productoDigitos(num1)) {
        cout << "Mayor producto de digitos: " << num2 << endl;
    } else {
        cout << "Ambos tienen el mismo producto de digitos." << endl;
    }

    if (cantidadDivisores(num1) > cantidadDivisores(num2)) {
        cout << "Mayor cantidad de divisores: " << num1 << endl;
    } else if (cantidadDivisores(num2) > cantidadDivisores(num1)) {
        cout << "Mayor cantidad de divisores: " << num2 << endl;
    } else {
        cout << "Ambos tienen la misma cantidad de divisores." << endl;
    }

    cout << "Ambos son primos: ";
    if (esPrimo(num1) && esPrimo(num2)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Ambos son capicuas: ";
    if (esCapicua(num1) && esCapicua(num2)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    cout << "Son numeros amigos: ";
    if (sonAmigos(num1, num2)) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

bool esPrimo(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int cantidadDigitos(int n) {
    int contador = 0;

    while (n > 0) {
        contador++;
        n = n / 10;
    }

    return contador;
}

int sumaDigitos(int n) {
    int suma = 0;

    while (n > 0) {
        suma = suma + n % 10;
        n = n / 10;
    }

    return suma;
}

int productoDigitos(int n) {
    int producto = 1;

    while (n > 0) {
        producto = producto * (n % 10);
        n = n / 10;
    }

    return producto;
}

int digitoMayor(int n) {
    int mayor = 0;

    while (n > 0) {
        int digito = n % 10;

        if (digito > mayor) {
            mayor = digito;
        }

        n = n / 10;
    }

    return mayor;
}

int digitoMenor(int n) {
    int menor = 9;

    while (n > 0) {
        int digito = n % 10;

        if (digito < menor) {
            menor = digito;
        }

        n = n / 10;
    }

    return menor;
}

int invertirNumero(int n) {
    int invertido = 0;

    while (n > 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }

    return invertido;
}

bool esCapicua(int n) {
    if (n == invertirNumero(n)) {
        return true;
    } else {
        return false;
    }
}

int cantidadDivisores(int n) {
    int contador = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            contador++;
        }
    }

    return contador;
}

int sumaDivisores(int n) {
    int suma = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            suma = suma + i;
        }
    }

    return suma;
}

bool esPerfecto(int n) {
    if (sumaDivisores(n) == n) {
        return true;
    } else {
        return false;
    }
}

bool sonAmigos(int a, int b) {
    if (sumaDivisores(a) == b && sumaDivisores(b) == a) {
        return true;
    } else {
        return false;
    }
}