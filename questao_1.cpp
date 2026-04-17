#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n, antes, depois;
    cout << "Digite um número inteiro: ";
    cin >> n;
    antes = n-1;
    depois = n+1;
    cout << "\nAntecessor = " << antes;
    cout << "\nSucessor = " << depois << endl;
}