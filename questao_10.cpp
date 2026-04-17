#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float tempo, vm, dist, fuel;
    cout << "\nDuração da viagem (h): ";
    cin >> tempo;
    cout << "\nVelocidade média (Km/h): ";
    cin >> vm;
    dist = tempo*vm;
    fuel = dist/12;
    cout << "\nGasto com combustível (L): " << fixed << setprecision(1) << fuel << endl;
}