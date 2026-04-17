#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    float p1, p2, mediaA;
    float soma = 0;
    for(int i = 1; i <= 15; i++) {
        cout << "\nNome: ";
        getline(cin, nome);
        cout << "\nNota P1: ";
        cin >> p1;
        cout << "\nNota P2: ";
        cin >> p2;
        soma += (p1 + p2);
        mediaA = (p1+p2)/2;
        cout << endl << nome << ":\n- Nota P1 = " << p1 << "\n- Nota P2 = " << p2
             << "\nMédia = " << fixed << setprecision(2) << mediaA << endl;
    }
    cout << "\nMédia da turma = " << fixed << setprecision(2) << (soma/30) << endl;
}