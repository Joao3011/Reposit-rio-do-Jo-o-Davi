#include <iostream>
using namespace std;

int main() {
    int v[10];

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) cin >> v[i];

    cout << "Vetor invertido:\n";
    for (int i = 9; i >= 0; i--) cout << v[i] << " ";
    cout << endl;

    return 0;
}
