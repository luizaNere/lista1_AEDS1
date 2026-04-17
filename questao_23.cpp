#include <iostream>
#include <string>
using namespace std;

int main() {
    int diaN, mesN, anoN; //nascimento
    int diaA, mesA, anoA; //data atual
    char barra; //separar data

    cout << "\nDigite a data de nascimento (DD/MM/AAAA): ";
    cin >> diaN >> barra >> mesN >> barra >> anoN;
    cout << "Digite a data atual (DD/MM/AAAA): ";
    cin >> diaA >> barra >> mesA >> barra >> anoA;

    int idade = anoA - anoN;
    if (mesA < mesN || (mesA == mesN && diaA < diaN)) {
        idade -= 1;
    }
    cout << "\nIdade: " << idade << " anos." << endl;
}