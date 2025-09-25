#include <stdio.h>

int main() {
    int destino, idaVolta;
    float valor;

    printf("Escolha o destino:\n1 - Morros\n2 - Barreirinhas\n3 - Bacabeira\n4 - Rosario\n");
    scanf("%d", &destino);

    switch(destino) {
        case 1: valor = 120.0; break;
        case 2: valor = 200.0; break;
        case 3: valor = 50.0;  break;
        case 4: valor = 80.0;  break;
        default: printf("Destino invalido!\n"); return 0;
    }

    printf("A viagem sera:\n1 - Somente ida\n2 - Ida e volta\n");
    scanf("%d", &idaVolta);

    if (idaVolta == 2) {
        valor *= 2;
        valor *= 0.90; // desconto 10%
    }

    printf("Valor total da passagem: R$ %.2f\n", valor);
    return 0;
}
