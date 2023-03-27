#include <iostream>
using namespace std;
int main() {
    
    int num_visitas =0;
    int hay_torta =1;
    
    while (num_visitas <10 && hay_torta){
        cout << "abriendo el refrigerador..." << endl;
        if (hay_torta){
            cout << "om-nom-nom :P" << endl;
            cout << "¿aun quieres mas? (1 para si, 0 para no):";
            cin >> hay_torta;
            num_visitas++;
        } else {
            cout << "sin pastel :(" << endl;
            break;
        }
        }
    if (num_visitas >= 10){
        cout <<"ya has tenido suficiente, no necesitas mas torta esta noche :)";
    }
    
    return 0;
}