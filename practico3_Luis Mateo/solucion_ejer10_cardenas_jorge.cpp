#include <iostream>
using namespace std;
int main() {
    
    int bill;
    int sum=0;
    do{
        cin>> bill;
        if (bill>0){
            cout << "income: " << bill << endl;
            sum += bill;
        }else {
            //ignorar cantidades negativas y cero
        }
    }while (bill !=0);
    cout << "total income: " << sum << endl;
    
    return 0;
}