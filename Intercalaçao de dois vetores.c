 #include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], intercalado[10];

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

    for (int i = 0, j = 0; i < 5; i++) {
        intercalado[j++] = vetor1[i];
        intercalado[j++] = vetor2[i];
    }

    printf("Vetor intercalado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", intercalado[i]);
    }
    printf("\n");

    return 0;
}