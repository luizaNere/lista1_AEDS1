#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int c, d, u, num;
    cout << "Insira o valor no formato UDC:" << endl;
    cin >> u >> d >> c;
    num = u + (10*d) + (100*c);
    cout << "\nO dobro de " << num << " é " << (num*2) << endl;
}