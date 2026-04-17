#include <iostream>
using namespace std;

int main() {
    int a, b, soma;
    cout << "\nvalor de A = ";
    cin >> a;
    cout << "\nvalor de B = ";
    cin >> b;
    soma = a+b;
    if(soma >= 10) {
        cout << "\nA + B = " << soma << endl;
    } else {
        cout << "\nInválido!\nsoma < 10" << endl;
    }
}