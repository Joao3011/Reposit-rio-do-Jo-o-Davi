#include <iostream>
using namespace std;

int main() {
    int a[5], b[5], c[10];

    cout << "Digite 5 numeros para o vetor A:\n";
    for (int i = 0; i < 5; i++) cin >> a[i];

    cout << "Digite 5 numeros para o vetor B:\n";
    for (int i = 0; i < 5; i++) cin >> b[i];

    for (int i = 0; i < 5; i++) {
        c[i * 2] = a[i];
        c[i * 2 + 1] = b[i];
    }

    cout << "Vetor intercalado:\n";
    for (int i = 0; i < 10; i++) cout << c[i] << " ";
    cout << endl;

    return 0;
}
