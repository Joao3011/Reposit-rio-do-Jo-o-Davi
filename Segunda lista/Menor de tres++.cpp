#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    cout << menor << endl;
    return 0;
}