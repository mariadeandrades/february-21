// Escreva um programa para ler um número real e imprimir a terça parte deste número.
#include <stdio.h>
int main() {
    float n;
    printf("Digite um numero real qualquer:\n");
    scanf("%f", &n);
    float d = n/3;
    printf("A terca parte de %.1f eh %.1f.", n, d);
    return 0;
}