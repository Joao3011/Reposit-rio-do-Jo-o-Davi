#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == 0 || b == 0) {
        if (a == 0 && b == 0) {
            cout << "Ambos zero: nao ha multiplo definido" << endl;
        } else if (a == 0) {
            cout << "0 e multiplo de " << b << endl;
        } else {
            cout << ((b % a == 0) ? "Multiplo" : "Nao multiplo") << endl;
        }
        return 0;
    }
    if (a % b == 0 || b % a == 0) {
        cout << "Multiplo" << endl;
    } else {
        cout << "Nao multiplo" << endl;
    }
    return 0;
}
