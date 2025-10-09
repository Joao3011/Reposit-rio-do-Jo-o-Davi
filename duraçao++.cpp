#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int duracaoSegundos;
    cout << "Digite a duração em segundos: ";
    cin >> duracaoSegundos;

    int horas = duracaoSegundos / 3600;
    int minutos = (duracaoSegundos % 3600) / 60;
    int segundos = duracaoSegundos % 60;

    cout << setfill('0') << setw(2) << horas << ":"
         << setfill('0') << setw(2) << minutos << ":"
         << setfill('0') << setw(2) << segundos << endl;

    return 0;
}
