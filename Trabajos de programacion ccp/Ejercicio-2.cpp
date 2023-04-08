#include <iostream>
using namespace std;

int main() {
    int num, reversed_num = 0, remainder, original_num;

    cout << "Introduce un numero entero: ";
    cin >> num;

    original_num = num;

    // N�mero invertido 
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    // Ver si el n�mero es palindromo 
    if (original_num == reversed_num) {
        cout << "Es palindromo." << endl;
    }
    else {
        cout << "No es palindromo." << endl;
    }

    return 0;
}

//El programa comienza pidiendo al usuario que ingrese un n�mero entero. Luego, el programa invierte el n�mero utilizando una estructura de bucle while. Dentro del bucle, el programa divide el n�mero original por 10 para obtener el �ltimo d�gito del n�mero. Luego, multiplica el n�mero invertido por 10 y suma el �ltimo d�gito para obtener el n�mero invertido actualizado. Finalmente, el programa compara el n�mero invertido con el n�mero original para determinar si es un pal�ndromo o no. Si el n�mero invertido es igual al n�mero original, se muestra un mensaje indicando que es un pal�ndromo. De lo contrario, se muestra un mensaje indicando que no es un pal�ndromo.
