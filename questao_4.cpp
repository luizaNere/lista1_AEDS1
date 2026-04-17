#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    float areaC, areaQ, raio, lado;
    cout << "Lado do quadrado (cm): ";
    cin >> lado;
    raio = lado/2;
    areaC = M_PI*pow(raio, 2);
    areaQ = pow(lado, 2);
    cout << "\nÁrea externa ao círculo = " << fixed << setprecision(3) << (areaQ-areaC)
         << " cm²" << endl;
}