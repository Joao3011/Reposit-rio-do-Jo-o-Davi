#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double raio, area;
    const double PI = 3.14159;

    cout << "Raio do círculo: ";
    cin >> raio;

    area = PI * pow(raio, 2);

    cout << fixed << setprecision(3);
    cout << "Área do círculo: " << area << endl;
    return 0;
}
