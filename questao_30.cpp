#include <iostream>
using namespace std;

int main() {
    bool naoE, obrigatorio, facultativo;
    int idade;
    cout << "\nDigite a idade: ";
    cin >> idade;
    naoE = idade<16;
    obrigatorio = (idade>18) && (idade<65);
    facultativo = ((idade>16) && (idade<18)) || (idade>65);
    if (naoE) {
        cout << "\nNão eleitor." << endl;
    } else if (obrigatorio) {
        cout << "\nEleitor obrigatório." << endl;
    } else if (facultativo) {
        cout << "\nEleitor facultativo." << endl;
    }
}