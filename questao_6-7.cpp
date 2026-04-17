#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void radianos() {
    float rad, graus;
    cout << "Ângulo em graus: ";
    cin >> graus;
    rad = graus*(M_PI/180);
    cout << "\nÂngulo em radianos = " << fixed << setprecision(3) << rad << endl;
}

void graus() {
    float rad, graus;
    cout << "Medida do arco em radianos: ";
    cin >> rad;
    graus = rad*(180/M_PI);
    cout << "\nMedida em graus = " << fixed << setprecision(3) << graus << endl;
}

int main() {
    radianos();
    graus();
}