#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, idade;
    do {
        cout << "\nIdade: ";
        cin >> idade;
        if(idade == -1) {
            break;
        }
        if(idade < 21) {
            a++;
        } else if(idade > 50) {
            b++;
        }
    } while(idade != -1);
    cout << "\nMenos de 21 anos: " << a << " pessoas." << endl;
    cout << "\nMais de 50 anos : " << b << " pessoas." << endl;
}