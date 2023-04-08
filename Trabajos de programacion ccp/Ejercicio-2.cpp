#include <iostream>
using namespace std;

int main() {
    int num, reversed_num = 0, remainder, original_num;

    cout << "Introduce un numero entero: ";
    cin >> num;

    original_num = num;

    // Número invertido 
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    // Ver si el número es palindromo 
    if (original_num == reversed_num) {
        cout << "Es palindromo." << endl;
    }
    else {
        cout << "No es palindromo." << endl;
    }

    return 0;
}

//El programa comienza pidiendo al usuario que ingrese un número entero. Luego, el programa invierte el número utilizando una estructura de bucle while. Dentro del bucle, el programa divide el número original por 10 para obtener el último dígito del número. Luego, multiplica el número invertido por 10 y suma el último dígito para obtener el número invertido actualizado. Finalmente, el programa compara el número invertido con el número original para determinar si es un palíndromo o no. Si el número invertido es igual al número original, se muestra un mensaje indicando que es un palíndromo. De lo contrario, se muestra un mensaje indicando que no es un palíndromo.
