#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite quantos termos deseja da sequencia de Fibonacci: ";
    cin >> n;

    if (n <= 0) {
        cout << "Numero invalido.\n";
        return 0;
    }

    long long a = 0, b = 1;
    cout << "Sequencia: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        long long temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;

    return 0;
}
