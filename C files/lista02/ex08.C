/* Faça um programa que indique se um número inteiro informado pelo usuário está compreendido
entre 20 e 90 ou não. (20 e 90 não estão na faixa de valores).*/
#include <stdio.h>
int main() {
    int n;
    printf("Escolha um numero:\n");
    scanf("%d", &n);
    if (n < 90 && n > 20){
        printf("O numero %d esta entre 20 e 90.", n);
    }
    else {
        printf("O numero %d nao esta entre 20 e 90.", n);
    }
    return 0;
}