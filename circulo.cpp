#include <stdio.h>

int main() {
    char nome[100];
    double valorHora, pagamento;
    int horas;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valorHora * horas;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

    return 0;
}