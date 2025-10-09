#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distancia, combustivel, consumoMedio;

    cout << "Distância percorrida (km): ";
    cin >> distancia;

    cout << "Total de combustível gasto (litros): ";
    cin >> combustivel;

    consumoMedio = distancia / combustivel;

    cout << fixed << setprecision(3);
    cout << "Consumo médio: " << consumoMedio << " km/l" << endl;
    return 0;
}
