#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;
    printf("Quantos elementos da sequencia de Fibonacci? ");
    scanf("%d", &n);
    printf("Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}