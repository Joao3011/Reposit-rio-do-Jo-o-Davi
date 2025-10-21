#include <iostream>
using namespace std;

int main() {
    int m[4][4], maior;

    cout << "Digite os 16 valores da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> m[i][j];

    maior = m[0][0];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (m[i][j] > maior)
                maior = m[i][j];

    cout << "Maior valor da matriz: " << maior << endl;
    return 0;
}
