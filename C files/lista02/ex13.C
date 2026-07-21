/* Escreva um programa que receba um número inteiro positivo de 3 casas e imprima o algarismo da casa das
dezenas. Não se esqueça de testar para ver se o número informado tem realmente 3 casas. */
#include <stdio.h>
int main() {
    int n, d;
    printf("Escolha um numero inteiro positivo de tres casas:\n");
    scanf("%d", &n);
    while (n < 100 || n > 999){
        printf("Numero invalido; tente novamente:\n");
        scanf("%d", &n);
    }
    d = (n/10)%10;
    printf("Algarismo das dezenas = %d", d);
    return 0;
}