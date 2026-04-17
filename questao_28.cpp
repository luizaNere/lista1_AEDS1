#include <iostream>
using namespace std;

int main() {
    int valor, maior, menor, antes = 0;
    do {
        cout << "\nDigite o valor: ";
        cin >> valor;
        if(valor < 0) {
            break;
        }
        if(valor > antes) {
            maior = valor;
        } else if(valor < antes) {
            menor = valor;
        }
        antes = valor;
    } while(valor > 0);
    cout << "\nMaior valor = " << maior << endl;
    cout << "\nMenor valor = " << menor << endl;
}