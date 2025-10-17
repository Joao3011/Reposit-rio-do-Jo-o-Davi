#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double precoUnitario, valorPago;
    int quantidade;
    cin >> precoUnitario >> quantidade >> valorPago;
    double total = precoUnitario * quantidade;
    cout << fixed << setprecision(2);
    if (valorPago >= total) {
        cout << "Troco: R$ " << (valorPago - total) << endl;
    } else {
        cout << "Falta: R$ " << (total - valorPago) << endl;
    }
    return 0;
}
