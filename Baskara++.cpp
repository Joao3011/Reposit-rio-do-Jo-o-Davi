#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0.0) {
        cout << "Coeficiente a = 0: nao eh equacao do segundo grau" << endl;
        return 0;
    }
    double delta = b*b - 4*a*c;
    if (delta < 0) {
        cout << "Equacao nao possui raizes reais" << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        cout << fixed << setprecision(4);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    return 0;
}
