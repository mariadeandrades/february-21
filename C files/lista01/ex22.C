/* Escreva um programa que receba o lado de um quadrado e imprima: perímetro, área, diagonal:*/
#include <math.h>
#include <stdio.h>
int main() {
    double l;
    printf("Qual o lado do quadrado?\n");
    scanf("%lf", &l);
    double p = 4*l;
    double a = pow(l, 2);
    double d = l*sqrt(3);
    printf("--RESULTADOS--\nperimetro = %.2lf\narea = %.2lf\ndiagonal = %.2lf", p, a, d);
    return 0;
}