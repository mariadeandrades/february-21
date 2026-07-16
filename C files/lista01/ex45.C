/*Escreva um programa que leia um número entre 0 e 60 (assuma que o usuário digitará um número nesse
intervalo). Imprima o seu sucessor, sabendo que o sucessor de 60 é 0. Não pode ser usado nenhum comando de
seleção e nem de repetição.*/
#include <stdio.h>
int main() {
    int n, sucessor;
    printf("Digite um numero entre 0 e 60:\n");
    scanf("%d", &n);
    while (n < 0 || n > 60){
        printf("Este numero esta fora do intervalo aceito.\n");
        printf("Digite um numero entre 0 e 60:\n");
        scanf("%d", &n);
    }
    if (n == 60) {
        sucessor = 0;
    }
    else {
        sucessor = n + 1;
    }
    printf("O sucessor de %d eh %d.", n, sucessor);
    return 0;
}