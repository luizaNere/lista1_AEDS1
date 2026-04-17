#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int opn, idade, soma = 0;
    int um = 0, dois = 0, tres = 0;
    for(int i = 0; i < 20; i++) {
        cout << "\nDigite sua idade: ";
        cin >> idade;
        soma += idade;
        cout << "\nSua opinião sobre o filme:\n1- Regular\n2- Bom\n3- Excelente\n-> ";
        cin >> opn;
        switch(opn) {
            case 1:
                um++;
            case 2:
                dois++;
            case 3:
                tres++;
            default:
                cout << "\nValor inválido!" << endl;
        }
    }
    cout << "\nMédia de idade = " << fixed << setprecision(2) << (soma/20) << endl;

    float p1, p2, p3;
    p1 = 100*um/20;
    p2 = 100*dois/20;
    p3 = 100*tres/20;

    cout << "\nPercentagem de cada avaliação:\nRegular = " << fixed << setprecision(2) << p1
         << "%\nBom = " << fixed << setprecision(2) << p2 << "%\nExcelente = " << fixed
         << setprecision(2) << p3 << "%\n";
}