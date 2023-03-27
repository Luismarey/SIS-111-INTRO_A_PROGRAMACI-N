#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    double base, exponente;
    cin >> base >> exponente;
    double resultado = pow (base,exponente);
    cout <<"la potencia de " << base << " elevado a " << exponente << " es " << resultado << endl;
    
       return 0;
}