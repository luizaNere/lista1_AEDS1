#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "\nDigite um número inteiro: ";
    cin >> n;
    if (n > 20) {
        cout << "\nMaior que 20." << endl;
    } else if (n < 20) {
        cout << "\nMenor que 20." << endl;
    } else {
        cout << "\nIgual a 20." << endl;
    }
}