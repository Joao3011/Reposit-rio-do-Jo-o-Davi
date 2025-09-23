#include <stdio.h>

int main() {
    int vetor[10], x, achou = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero a buscar: ");
    scanf("%d", &x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            achou = 1;
            break;
        }
    }
    if (achou)
        printf("Numero encontrado no vetor.\n");
    else
        printf("Numero nao encontrado no vetor.\n");
    return 0;
}