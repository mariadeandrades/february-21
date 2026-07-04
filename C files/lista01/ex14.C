// Escreva um programa que receba o saldo de uma aplicação e imprima o novo saldo, considerando o reajuste de 1%.
#include <stdio.h>
int main() {
    float saldo, saldo2;
    printf("Qual o seu saldo atual? ");
    scanf("%f", &saldo);
    saldo2 = saldo*1.01;
    printf("\nApos reajuste de 1%, seu saldo atual eh de R$ %.2f.", saldo2);
    return 0;
}