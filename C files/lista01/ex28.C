/* Escreva um programa que receba os valores dos catetos de um triângulo retângulo e imprima sua hipotenusa.*/
#include <stdio.h>
#include <math.h>
int main() {
    double a, b;
    printf("Quais as medidas dos catetos do triangulo?\n");
    scanf("%lf %lf", &a, &b);
    double c = sqrt(a*a + b*b);
    printf("Hipotenusa = %.2lf", c);
    return 0;
}