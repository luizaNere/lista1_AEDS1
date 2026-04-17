#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, troca;
    cout << "\nValor de A: ";
    getline(cin, a);
    cout << "\nValor de B: ";
    getline(cin, b);
    troca = b;
    b = a;
    a = troca;
    cout << "\nTROCA DE VALORES\nA = " << a << "\nB = " << b << endl;
}