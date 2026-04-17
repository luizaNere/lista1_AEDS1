#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float preco;
    cout << "Preço do produto = R$";
    cin >> preco;
    preco -= (9*preco/100);
    cout << "\nPreço com desconto = R$" << fixed << setprecision(2) << preco << endl;
}