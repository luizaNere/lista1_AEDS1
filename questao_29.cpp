#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int numero;
    cout << "\nDigite um número inteiro: ";
    cin >> numero;
    if(numero%10 == 0) {
        cout << endl << numero << " é divisível por 10." << endl;
    } else if(numero%2 == 0) {
        cout << endl << numero << " é divisível por 2." << endl;
    } else if(numero%5 == 0) {
        cout << endl << numero << " é divisível por 5." << endl;
    } else {
        cout << endl << numero << " não é divisível por 2, nem por 5, nem por 10." << endl;
    }
}