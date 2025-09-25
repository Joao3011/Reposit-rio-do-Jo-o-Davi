#include <stdio.h>

int main() {
    int tipo;
    float valor, total;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    printf("Digite o tipo de comprador (1-Visitante, 2-Servidor, 3-Aluno): ");
    scanf("%d", &tipo);

    switch(tipo) {
        case 1: total = valor; break;
        case 2: total = valor * 0.90; break; // 10% desconto
        case 3: total = valor * 0.95; break; // 5% desconto
        default: 
            printf("Tipo invalido!\n");
            return 0;
    }

    printf("Valor a pagar: R$ %.2f\n", total);
    return 0;
}
