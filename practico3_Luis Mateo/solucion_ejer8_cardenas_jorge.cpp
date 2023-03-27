#include <iostream>
using namespace std;
int main() {
    
    string linea;
    getline(cin, linea);
    
    string word = "";
    for (int i=0;i <linea.length(); i++){
        if (linea[i]== ' '){
            if (word.length()>0){
                cout << "[" << word << "]";
                word = "";
            }
        }else if (i == linea.length() -1){
            word += linea [i];
            cout << "[" <<word <<"]" <<endl;
        }else {
            word += linea [i];
        }
    }
    return 0;
}