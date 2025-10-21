#include <iostream>
using namespace std;

int main() {
    int a[5], b[5];
    int produto = 0;

    cout << "Digite 5 numeros do vetor A:\n";
    for (int i = 0; i < 5; i++) cin >> a[i];

    cout << "Digite 5 numeros do vetor B:\n";
    for (int i = 0; i < 5; i++) cin >> b[i];

    for (int i = 0; i < 5; i++) produto += a[i] * b[i];

    cout << "Produto escalar: " << produto << endl;
    return 0;
}
