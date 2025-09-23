#include <stdio.h>

int main() {
    char escala;
    double temp, convertido;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf(" %c", &escala);

    if (escala == 'F' || escala == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &temp);
        convertido = (temp - 32) * 5.0 / 9.0;
        printf("Temperatura equivalente em Celsius: %.2lf\n", convertido);
    } else {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &temp);
        convertido = temp * 9.0 / 5.0 + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", convertido);
    }
    return 0;
}