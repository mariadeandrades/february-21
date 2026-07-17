/* Escreva um programa que leia um número inteiro e diga se ele é ou não um número divisível por 5.*/
#include <stdio.h>
int main() {
    int n;
    printf("Escolha um numero inteiro:\n");
    scanf("%d", &n);
    if (n % 5 == 0) {
        printf("O numero %d eh divisivel por 5.", n);
    }
    else {
        printf("O numero %d nao eh divisivel por 5.", n);
    }
    return 0;
}