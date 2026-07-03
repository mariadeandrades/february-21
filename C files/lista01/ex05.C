// Escreva um programa para ler dois números inteiros e imprimi-los
#include <stdio.h>
int main() {
    float n1;
    float n2;
    printf("Digite um numero inteiro qualquer:\n");
    scanf("%f", &n1);
    while (n1 != (int)n1){
        printf("Voce digitou um numero com casas decimais, mas este programa so trabalha com inteiros!\n");
        printf("Digite um numero inteiro qualquer:\n");
        scanf("%f", &n1);
    }
    printf("Digite mais um numero inteiro qualquer:\n");
    scanf("%f", &n2);
    while (n2 != (int)n2){
        printf("Voce digitou um numero com casas decimais, mas este programa so trabalha com inteiros!\n");
        printf("Digite um numero inteiro qualquer:\n");
        scanf("%f", &n2);
    }
    printf("Os numeros inteiros escolhidos por voce sao %.0f e %.0f! Boas escolhas!", n1, n2);
    return 0;
}