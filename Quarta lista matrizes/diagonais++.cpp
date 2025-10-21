#include <iostream>
using namespace std;

int main() {
    int m[3][3], diagP = 0, diagS = 0;

    cout << "Digite os 9 valores da matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> m[i][j];

    for (int i = 0; i < 3; i++) {
        diagP += m[i][i];
        diagS += m[i][2 - i];
    }

    cout << "Soma da diagonal principal: " << diagP << endl;
    cout << "Soma da diagonal secundaria: " << diagS << endl;
    return 0;
}
