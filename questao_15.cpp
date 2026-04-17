#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float media1, media2, soma;
    media1 = (8+9+7)/3;
    media2 = (4+5+6)/3;
    soma = media1+media2;
    cout << "\nMédia 1 = " << fixed << setprecision(1) << media1;
    cout << "\nMédia 2 = " << fixed << setprecision(1) << media2;
    cout << "\nMédia das médias = " << fixed << setprecision(1) << (soma/2) << endl;
}