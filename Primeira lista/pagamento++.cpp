#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nome;
    double valorHora;
    double horasTrabalhadas;
    double pagamento;

    cout << "Nome do funcionário: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorHora;

    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;

    pagamento = valorHora * horasTrabalhadas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " é R$ " << pagamento << endl;
    return 0;
}
