/* Escreva um programa que receba a base e a altura de um retângulo e imprima a seguinte saída: perimetro, área, 
diagonal*/
#include <stdio.h>
#include <math.h>
int main() {
    double b, a;
    printf("Qual a base e a altura do seu retangulo?\n");
    scanf("%lf %lf", &b, &a);
    double p = 2*(b + a);
    double ar = b*a;
    double d = sqrt(b*b + a*a);
    printf("--RESULTADOS--\nperimetro = %.2lf\narea = %.2lf\ndiagonal = %.2lf", p, ar, d);
    return 0;
}