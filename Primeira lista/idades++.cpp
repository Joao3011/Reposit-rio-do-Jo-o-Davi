#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "Digite o nome da primeira pessoa: ";
    cin >> nome1;
    cout << "Digite a idade da primeira pessoa: ";
    cin >> idade1;

    cout << "Digite o nome da segunda pessoa: ";
    cin >> nome2;
    cout << "Digite a idade da segunda pessoa: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "Nome 1: " << nome1 << ", Nome 2: " << nome2 << endl;
    cout << "Idade media: " << media << endl;

    return 0;
}
