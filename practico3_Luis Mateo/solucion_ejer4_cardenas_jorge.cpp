#include <iostream>
#include <string> 
using namespace std;
int main() {
    int a =5;
    int b= 0;
    do {
        cout << "guess the number: " <<endl;
        cin >> b;
    }
    while (a != b);
    cout << "you are right!" << endl;
    return 0;
}