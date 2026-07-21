/*Escreva um programa que receba o valor de x, calcule e imprima o valor de f(x), dado que:
f(x) = 8 / (2-x)*/
#include <stdio.h>
int main() {
    float x, f;
    printf("Escolha um valor para 'x':\n");
    scanf("%f", &x);
    f = 8/(2-x);
    printf("f(%.0f) = %.0f", x, f);
    return 0;
}