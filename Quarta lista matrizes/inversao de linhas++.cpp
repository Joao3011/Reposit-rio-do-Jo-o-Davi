#include <iostream>
using namespace std;

int main() {
    int m[3][3];

    cout << "Digite os 9 valores da matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> m[i][j];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            int temp = m[i][j];
            m[i][j] = m[i][2 - j];
            m[i][2 - j] = temp;
        }
    }

    cout << "Matriz com linhas invertidas:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
    return 0;
}
