/* Escreva um programa que receba vários números inteiros e verifique se eles são ou não quadrados perfeitos. O
programa deve terminar quando o usuário informar um número menor ou igual a zero. Obs.: Um número é
quadrado perfeito quando tem um número inteiro como raiz quadrada. Não é permitido usar o comando sqrt
em sua solução.*/
#include <stdio.h>
int main() {
    int n, i;
    printf("Digite um numero inteiro (ou <= 0 para sair):\n");
    scanf("%d", &n);
    while (n > 0){
        i = 1;
        while (i*i<n){
            i ++;
        }
        if (i*i == n){
            printf("%d eh um quadrado perfeito\n", n);
        }
        else {
            printf("%d nao eh um quadrado perfeito\n", n);
        }
    printf("Digite um numero inteiro (ou <= 0 para sair):");
    scanf("%d", &n);
    }
    printf("Fim");
    return 0;
}