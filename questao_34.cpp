#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0, idade;
    float peso;
    float s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    for(int i = 1; i <= 20; i++) {
        cout << "\nIndivíduo " << i << endl;
        cout << "\nPeso (Kg): ";
        cin >> peso;
        cout << "\nIdade (>1): ";
        cin >> idade;
        if((idade > 1) && (idade <= 10)) {
            q1++;
            s1 += peso;
        } else if((idade > 10) && (idade <= 20)) {
            q2++;
            s2 += peso;
        } else if((idade > 20) && (idade <= 30)) {
            q3++;
            s3 += peso;
        } else if(idade > 30) {
            q4++;
            s4 += peso;
        }
    }
    cout << "\nMédia de peso de 1 a 10 anos = " << fixed << setprecision(2) << (s1/q1) << endl;
    cout << "\nMédia de peso de 11 a 20 anos = " << fixed << setprecision(2) << (s2/q2) << endl;
    cout << "\nMédia de peso de 21 a 30 anos = " << fixed << setprecision(2) << (s3/q3) << endl;
    cout << "\nMédia de peso acima dos 30 anos = " << fixed << setprecision(2) << (s4/q4) << endl;
}