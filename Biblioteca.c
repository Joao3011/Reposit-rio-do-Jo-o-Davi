#include <stdio.h>

int main() {
    int tipoUsuario, dias;
    int codLivro, qtd;

    printf("Digite o codigo do livro: ");
    scanf("%d", &codLivro);

    printf("Digite a quantidade de dias de emprestimo: ");
    scanf("%d", &dias);

    printf("Digite o tipo de usuario (1-Professor, 2-Aluno): ");
    scanf("%d", &tipoUsuario);

    switch(tipoUsuario) {
        case 1: printf("Professor - pode ficar 10 dias com o livro.\n"); break;
        case 2: printf("Aluno - pode ficar 3 dias com o livro.\n"); break;
        default: printf("Tipo de usuario invalido!\n");
    }

    return 0;
}
