/* Escreva um programa que leia o valor de um depósito e o valor da taxa de juros. Calcule e imprima o valor do
rendimento e o valor total depois do rendimento.*/
#include <stdio.h>
int main() {
    double d, x, r, t; //onde d = depósito, x = taxa, r = rendimento, t = total
    printf("Informe o valor do deposito e a taxa de aplicacao, no formato VALOR TAXA, depois tecle ENTER:\n");
    scanf("%lf %lf", &d, &x);
    r = x*d;
    t = (1 + x)*d;
    printf("rendimento = %.2lf\nmontante = %.2lf",r, t);
    return 0;
}