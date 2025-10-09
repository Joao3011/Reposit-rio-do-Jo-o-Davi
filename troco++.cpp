#include <iostream>
using namespace std;

int main() {
    double preco;
    int quantidade;
    double pagamento, troco;

    cout << "Preço unitário: ";
    cin >> preco;
    cout << "Quantidade: ";
    cin >> quantidade;
    cout << "Valor pago: ";
    cin >> pagamento;

    troco = pagamento - (preco * quantidade);

    cout << "Troco a ser devolvido: R$ " << troco << endl;
    return 0;
}
