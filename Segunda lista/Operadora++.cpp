#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minutos;
    cin >> minutos;
    double base = 50.0;
    int franquia = 100;
    double total = base;
    if (minutos > franquia) {
        total += (minutos - franquia) * 2.0;
    }
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << endl;
    return 0;
}
