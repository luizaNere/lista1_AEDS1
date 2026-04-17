#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float c, f;
    cout << "Temperatura em Fahrenheit: ";
    cin >> f;
    c = (f-32)*(5/9.0);
    cout << endl << fixed << setprecision(2) << f << "°F = " 
         << fixed << setprecision(2) << c << "°C" << endl;
}