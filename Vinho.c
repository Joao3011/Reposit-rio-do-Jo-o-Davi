#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo do vinho: ");
    scanf("%d", &codigo);

    switch(codigo) {
        case 1: case 2: case 3:
            printf("Classificacao: De mesa\n"); break;
        case 4:
            printf("Classificacao: Tinto\n"); break;
        case 5:
            printf("Classificacao: Branco seco\n"); break;
        case 6: case 7:
            printf("Classificacao: Branco doce\n"); break;
        case 8:
            printf("Classificacao: Rose\n"); break;
        case 9:
            printf("Classificacao: Espumante\n"); break;
        default:
            printf("Codigo invalido!\n");
    }

    return 0;
}
