#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], produto_escalar = 0;

    printf("Digite 5 elementos para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 elementos para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    printf("Produto escalar dos dois vetores: %d\n", produto_escalar);

    return 0;
}