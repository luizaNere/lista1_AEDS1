#include <iostream>
using namespace std;

int main() {
    int total, horas, min, seg, resto;
    cout << "Tempo em segundos: ";
    cin >> total;
    horas = total/3600;
    resto = total%3600;
    min = resto/60;
    seg = resto%60;
    cout << endl << total << " s = " << horas << ":" << min << ":" << seg << endl;
}