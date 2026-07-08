/*21. Escreva um programa que receba o raio de um círculo e imprima a seguinte saída: perímetro, área:*/
#include <stdio.h> 
#include <math.h>
int main () {
    double r;
    printf("Qual o raio do circulo?\n");
    scanf("%lf", &r);
    double p = 2*M_PI*r;
    double a = M_PI*r*r;
    printf("--RESULTADOS--\nperimetro = %.2lf\narea = %.2lf", p, a);
    return 0;
}