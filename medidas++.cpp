#include <iostream>
#include <iomanip> // para setprecision
using namespace std;

int main() {
    double A, B, C;
    
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;

    double areaQuadrado = A * A;
    double areaTriangulo = (A * B) / 2.0;
    double areaTrapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "Área do quadrado: " << areaQuadrado << endl;
    cout << "Área do triângulo retângulo: " << areaTriangulo << endl;
    cout << "Área do trapézio: " << areaTrapezio << endl;

    return 0;
}
