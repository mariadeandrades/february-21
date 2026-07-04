/* Escreva um programa que receba um número inteiro de 3 casas e imprima o algarismo da cada uma das
dezenas.*/
//receba separado e junte depois 
#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Digite um numero inteiro de tres casas:");
    scanf("%d%d%d", &n1, &n2, &n3);
    char result[20];
    sprintf(result, "%d%d%d", n1, n2, n3);
    printf("Concatenado: %s\n", result);
    printf("Centena: %d\nDezena: %d\nUnidade: %d", n1, n2, n3);
    return 0;
}