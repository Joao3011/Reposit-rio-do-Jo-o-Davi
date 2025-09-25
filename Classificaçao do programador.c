#include <stdio.h>

int main() {
    int anos;

    printf("Digite o tempo de servico (em anos) do programador: ");
    scanf("%d", &anos);

    switch(anos) {
        case 1:
        case 2:
            printf("Categoria: Junior\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Categoria: Pleno A\n");
            break;
        case 6:
            printf("Categoria: Pleno B\n");
            break;
        default:
            if (anos >= 7)
                printf("Categoria: Senior\n");
            else
                printf("Tempo invalido!\n");
    }

    return 0;
}
