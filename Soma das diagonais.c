#include <stdio.h>

int main() {
    int matriz[3][3], soma_principal = 0, soma_secundaria = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][2 - i];
    }

    printf("Soma da diagonal principal: %d\n", soma_principal);
    printf("Soma da diagonal secundaria: %d\n", soma_secundaria);

    return 0;
}