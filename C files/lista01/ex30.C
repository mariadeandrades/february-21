/* Escreva um programa que receba a razão de uma Progressão Geométrica (P.G.) e o valor do 1° termo. Calcule e
imprima o 5° termo da série.*/
#include <stdio.h>
#include <math.h>
int main() {
    float q, a1;
    printf("Este programa imprime o quinto termo de uma PG.\n");
    printf("Quais os valores da razao e do primeiro termo dessa PG?\n");
    scanf("%f %f", &q, &a1);
    float an = a1*pow(q, 4);
    printf("a5 = %.2f", an);
    return 0;
}