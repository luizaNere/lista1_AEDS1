#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num, soma = 0, total = 0;
    do {
        cout << "\nDigite um número: ";
        cin >> num;
        if(num == 0) {
            break;
        }
        if(num%3 == 0) {
            soma += num;
            total++;
        }
    }while(num != 0);
    cout << "\nMédia dos múltiplos de 3 = " << (soma/total) << endl;
}