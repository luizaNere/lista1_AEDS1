#include <iostream>
using namespace std;

int main() {
    int inferior, superior;
    int soma = 0;
    cout << "\nLimite inferior = ";
    cin >> inferior;
    cout << "\nLimite superior = ";
    cin >> superior;
    for(int i=inferior; i<=superior; i++) {
        if(i%2 == 0) {
            cout << endl << i << endl;
            soma += i;
        }
    }
    cout << "\nSoma = " << soma << endl;
}