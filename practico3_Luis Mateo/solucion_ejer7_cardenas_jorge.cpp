#include <iostream>
using namespace std;
int main() {
    
    string linea;
    getline (cin,linea);
    
    int indice =0;
    for (int i=0; i< linea.length(); i++){
        if (linea [i] == ' '){
        cout << i - 1 << " ";
        }else if (i == linea.length() -1){
            cout << i << endl;
        }
        }
    
    return 0;
}