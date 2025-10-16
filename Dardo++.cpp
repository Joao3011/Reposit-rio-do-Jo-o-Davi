#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp;
    cin >> escala >> temp;
    if (escala == 'C' || escala == 'c') {
        double f = temp * 9.0/5.0 + 32.0;
        cout << fixed << setprecision(2) << f << " F" << endl;
    } else if (escala == 'F' || escala == 'f') {
        double c = 5.0 * (temp - 32.0) / 9.0;
        cout << fixed << setprecision(2) << c << " C" << endl;
    } else {
        cout << "Escala invalida" << endl;
    }
    return 0;
}
