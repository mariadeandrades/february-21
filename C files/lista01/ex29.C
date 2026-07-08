/* Escreva um programa que receba a razão de uma Progressão Aritmética (P.A.) e o valor do 1° termo. Calcule e
imprima o 10° termo da série.*/
#include <stdio.h>
int main() {
    float a1, r;
    printf("Este programa imprime o decimo termo de uma PA.\n");
    printf("Qual eh o primeiro termo e a razao desta PA?\n");
    scanf("%f %f", &a1, &r);
    float an = a1 + r*9;
    printf("a10 = %.2f", an);
    return 0;
}