#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float valor;
    cout << "Insira um valor (R$): ";
    cin >> valor;
    valor += (valor/10);
    cout << "\nValor após reajuste = R$" << fixed << setprecision(2) << valor << endl;
}