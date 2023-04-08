#include <iostream>
using namespace std;

int main() {
    int decimal, remainder, binario = 0, base = 1;

    cout << "Ingrese un numero decimal: ";
    cin >> decimal;

    while (decimal > 0) {
        remainder = decimal % 2;
        binario += remainder * base;
        base *= 10;
        decimal /= 2;
    }

    cout << "El numero binario es: " << binario << endl;

    return 0;
}

//El programa comienza pidiendo al usuario que ingrese un n�mero decimal. Luego, el programa utiliza una estructura de bucle while para convertir el n�mero decimal en un n�mero binario. En cada iteraci�n del bucle, el programa divide el n�mero decimal por 2 y almacena el resto en la variable remainder. Luego, el programa multiplica el resto por una base (1, 10, 100, 1000, etc.) y lo agrega al n�mero binario actualizado. Finalmente, el programa actualiza la base multiplicando por 10 y divide el n�mero decimal por 2. Este proceso se repite hasta que el n�mero decimal sea igual a cero. Al final, el programa muestra el n�mero binario.





