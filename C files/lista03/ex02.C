/* Elabore um programa que apresente os resultados da soma e da média aritmética dos valores pares situados na
faixa numérica de 50 a 70.*/
#include <stdio.h>
int main() {
    int i;
    int media;
    int soma = 0;
    int quantidade = 0;
    for (i = 50; i <= 70; i ++){
        if (i % 2 == 0){
            soma += i;
            quantidade ++;
        }
    }
    printf("%d\n", soma);
    media = soma/quantidade;
    printf("%d\n", quantidade);
    printf("%d", media);
    return 0;
}