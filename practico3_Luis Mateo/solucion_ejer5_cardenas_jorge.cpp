#include <iostream>
using namespace std;
int main() {
    
    int num1, num2;
    cout << "ingrese dos numeros enteros no negativos" << endl;
    cin >> num1 >> num2;
    
    for (int i = num1; i <= num2; i++){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}