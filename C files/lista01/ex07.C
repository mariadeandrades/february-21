/*Escreva um programa para ler dois números inteiros e imprimir a soma. Antes do resultado, deverá aparecer a
mensagem: Soma.*/
#include <stdio.h>
int main() {
    float soma;
    float n1;
    float n2;
    printf("Digite um numero inteiro qualquer:\n");
    scanf("%f", &n1);
    while (n1 != (int)n1){
        printf("Erro: digite um numero inteiro (sem casas decimais):\n");
        scanf("%f", &n1);
    }
    printf("Digite mais um numero inteiro qualquer:\n");
    scanf("%f", &n2);
    while (n2 != (int)n2){
        printf("Erro: digite um numero inteiro (sem casas decimais):\n");
        scanf("%f", &n2);
    }
    soma = n1 + n2;
    printf("Soma: %.0f + %.0f = %.0f", n1, n2, soma);
    return 0;
}