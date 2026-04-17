#include <string>
#include <iostream>
using namespace std;

int main() {
    string nome;
    char sexo;
    int idade;
    cout << "\nNome: ";
    getline(cin, nome);
    cout << "\nSexo (F ou M): ";
    cin >> sexo;
    cout <<"\nIdade: ";
    if((sexo=='F' || sexo=='f') && idade<25) {
        cout << endl << nome << " - ACEITA" << endl;
    } else {
        cout << endl << nome << " - NÃO ACEITA" << endl;
    }
}