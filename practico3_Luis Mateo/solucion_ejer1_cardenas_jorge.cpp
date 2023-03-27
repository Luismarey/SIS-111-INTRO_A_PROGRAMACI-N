#include <iostream>
using namespace std;
int main() {
    
    string x1 = "red";
    string x2 = "green";
    string x3 = "blue";
    string x4 = "0";
    
    cout << "¿Donde viste a mi gato?"<< endl;
    cin >> x1;
    cin >> x2;
    cin >> x3;
    cin >> x4;
    
    if (x4 == x1){
        cout << "Entrar a la casa 1" <<endl;
    }
    if (x4 == x2){
        cout << "Entrar a la casa 2"<< endl;
    }
    if (x4 == x3){
        cout << "Entrar a la casa 3"<< endl;
    }
    if (x4 != x1 && x4 != x2 && x4 != x3){
        cout << "Buscar en otro lado" << endl;
    }
    
    return 0;
}