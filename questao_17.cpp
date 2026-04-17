#include <iostream>
using namespace std;

void com_array() {
    int numeros[3];
    cout << "Digite 3 números inteiros: " << endl;
    cin >> numeros[0] >> numeros[1] >> numeros[2];
    float soma = numeros[0] + numeros[1] + numeros[2];
    cout << "\nMédia = " << (soma/3) << endl;
}