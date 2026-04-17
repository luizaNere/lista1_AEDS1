#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    float lado1, lado2, p, d, a;
    cout << "Dimensões do retângulo (cm):" << endl;
    cin >> lado1 >> lado2;
    p = (2*lado1) + (2*lado2);
    a = lado1*lado2;
    d = sqrt(pow(lado1, 2) + pow(lado2, 2));
    cout << "\nPerímetro = " << fixed << setprecision(2) << p << " cm" << endl;
    cout << "\nÁrea = " << fixed << setprecision(2) << a << " cm²" << endl;
    cout << "\nDiagonal = " << fixed << setprecision(2) << d << " cm" << endl;
}