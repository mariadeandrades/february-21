/*Escreva um programa que leia dois números reais e imprima o quadrado da diferença do primeiro valor pelo
segundo e a diferença dos quadrados.*/
#include <stdio.h>
#include <math.h>
int main() {
    float n1, n2, res;
    printf("Digite dois numeros reais:\n");
    scanf("%f %f", &n1, &n2);
    res = pow(n1 - n2, 2);
    printf("Resultado = %.2f", res);
    return 0;
}