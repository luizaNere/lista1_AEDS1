#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int horas;
    float salario, desc, bruto, liquido;
    cout << "\nHoras trabalhadas no mês: ";
    cin >> horas;
    cout << "\nValor do salário/hora: ";
    cin >> salario;
    bruto = salario*horas;
    cout << "\nPercentual de desconto INSS: ";
    cin >> desc;
    liquido = bruto - (bruto*desc/100);
    cout << "\nSalário bruto = R$" << fixed << setprecision(2) << bruto
         << "\nSalário líquido = R$" << fixed << setprecision(2) << liquido << endl;
}