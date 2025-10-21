#include <iostream>
using namespace std;

int main() {
    int m[5][5], linha;
    int soma = 0;

    cout << "Digite os 25 valores da matriz 5x5:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> m[i][j];

    cout << "Digite o numero da linha (0 a 4): ";
    cin >> linha;

    for (int j = 0; j < 5; j++)
        soma += m[linha][j];

    cout << "Soma da linha " << linha << ": " << soma << endl;
    return 0;
}
