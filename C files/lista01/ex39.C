/* Escreva um programa que leia o numerador e o denominador de uma fração e transforme isso em um número
decimal. Imprima o valor decimal obtido*/
#include <stdio.h>
int main() {
    int n, d;
    printf("Escolha um numerador:\n");
    scanf("%d", &n);
    printf("Escolha um denominador:\n");
    scanf("%d", &d);
    while (d == 0) {
        printf("O denominador nao pode ser 0. Escolha outro denominador:\n");
        scanf("%d", &d);
    }
    float f = (float)n/d;
    printf("%d / %d = %.2f", n, d, f);
    return 0;
}