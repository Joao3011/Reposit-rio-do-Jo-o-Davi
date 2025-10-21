#include <iostream>
using namespace std;

int main() {
    int v[10], n;
    bool achou = false;

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) cin >> v[i];

    cout << "Digite o numero a procurar: ";
    cin >> n;

    for (int i = 0; i < 10; i++) {
        if (v[i] == n) {
            achou = true;
            break;
        }
    }

    if (achou) cout << "Numero encontrado!\n";
    else cout << "Numero nao encontrado.\n";

    return 0;
}
