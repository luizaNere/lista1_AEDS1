#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int soma = 0, total = 0, num;
    float media;
    do {
        cout << "\nDigite um valor: ";
        cin >> num;
        if(num < 0) {
            break;
        }
        soma += num;
        total++;
    }while(num >= 0);
    media = soma/total;
    cout << "\nSoma = " << soma << "\nMédia = " << fixed << setprecision(2) << media
         << "\nTotal de valores computados = " << total << endl;
}