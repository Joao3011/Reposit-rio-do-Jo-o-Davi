#include <stdio.h>

int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz com linhas invertidas:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 2; j >= 0; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}