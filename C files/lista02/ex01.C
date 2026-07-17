/*Escreva um programa que leia um valor inteiro e diga se o número informado é par ou ímpar.*/
#include <stdio.h>
int main() {
    int n;
    printf("Digite um numero qualquer:\n");
    scanf("%d", &n);
    if (n % 2 != 0) {
        printf("O numero %d eh impar.", n);
    }
    else {
        printf("O numero %d eh par.", n);
    }
    return 0;
}