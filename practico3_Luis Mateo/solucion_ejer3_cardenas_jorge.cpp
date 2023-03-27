#include <iostream>
using namespace std;
int main() {
    
    double x1 = 0;
    double x2 = 0;
    cout << "ingrese las partes de la naranja" << endl;
    cin >> x1 >> x2;
    if (x1 == x2){
        cout << "la naranja se divide por partes iguales";
    }
   else if (x1 > x2){
       double diff = x1 - x2;
       cout << "cortar " << diff << " de la primer parte" << endl;
   }
   else{
       double diff = x2 - x1;
       cout << "cortar " << diff << " de la segunda parte" << endl;
   }
    return 0;
}