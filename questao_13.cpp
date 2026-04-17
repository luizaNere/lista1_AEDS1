#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, endereco, telefone;
    cout << "\nNome: ";
    getline(cin, nome);
    cout << "\nEndereço: ";
    getline(cin, endereco);
    cout << "\nTelefone [(XX)XXXXX-XXXX]: ";
    getline(cin, telefone);
    cout << "\nNOME: " << nome << "\nTELEFONE: " << telefone << "\nENDEREÇO: " << endereco << endl;
}