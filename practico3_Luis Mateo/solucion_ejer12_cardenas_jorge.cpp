#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    int n;
    cout << "ingrese un numero no negativo: ";
    cin >> n;
    
    if (n<0){
        cout << "no se permiten numeros negativos. Intentelo de nuevo." << endl;
        return 0;
    }
    if (n >12){
        cout<< "el resultado podria demorar en ser calculado. ¿desea continuar? (S/N) ";
        char opcion;
        cin >> opcion;
        if (opcion != 's' && opcion != 's') {
            return 0;
        }
    }
    int factorial = 1;
    for (int i= 2; i <=n; i++ ){
        factorial *=i;
    } 
    cout << "el factorial de " << n << " es: " << factorial << endl;
       return 0;
}