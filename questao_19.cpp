#include <iostream>
using namespace std;

int main() {
    int i, num;
    for(i=0; i < 10; i++) {
        cout << "\nDigite um número inteiro: ";
        cin >> num;
        if(num > 20) {
            cout << endl << (num/2) << endl;
        }
    }
}