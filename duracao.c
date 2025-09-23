#include <stdio.h>
int main() {
    int n,i;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }