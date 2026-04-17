#include <iostream>
using namespace std;

int main() {
    float salario, prestacao;
    cout << "\nSalário = R$";
    cin >> salario;
    cout << "\nPrestação = R$";
    cin >> prestacao;
    if(prestacao > (salario/5)) {
        cout << "\nEmpréstimo não pode ser concedido." << endl;
    } else {
        cout << "\nEmpréstimo pode ser concedido." << endl;
    }
}