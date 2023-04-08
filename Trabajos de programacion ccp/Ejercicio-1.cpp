#include <iostream>

using namespace std;

int main() {
    float money = 20.0;
    float ice_cream_price = 5.0;
    int num_ice_creams = 0;

    cout << "Dinero disponible: $" << money << endl;
    cout << "Precio del helado: $" << ice_cream_price << endl;

    while (money >= ice_cream_price) {
        money -= ice_cream_price;
        num_ice_creams++;
        cout << "Se compro un helado." << endl;
        cout << "Te quedan $" << money << " para comprar helados." << endl;
    }

    cout << "Te has quedado sin dinero para comprar helados." << endl;
    cout << "Se compraron " << num_ice_creams << " helados en total." << endl;

    return 0;
}
