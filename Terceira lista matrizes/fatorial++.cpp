#include <iostream>
using namespace std;

int main() {
    int n;
    unsigned long long fat = 1;

    cout << "Digite um numero inteiro nao-negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "Fatorial nao existe para negativos.\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) fat *= i;

    cout << n << "! = " << fat << endl;
    return 0;
}
