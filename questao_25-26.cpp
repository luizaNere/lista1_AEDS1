#include <iostream>
#include <math.h>
using namespace std;

void questao_25() {
    for(int i = 15; i <= 200; i++)
        cout << pow(i, 2) << endl;
}

void questao_26() {
    int soma = 0;
    for(int i = 1; i <= 100; i++)
        soma += i;
    cout << endl << soma << endl;
}