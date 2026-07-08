/* Escreva um programa que receba a base, a altura e a profundidade de um paralelepípedo, calcule e imprima o
valor de sua diagonal.*/
#include <stdio.h>
#include <math.h>
int main() {
    //x é a diagonal da base, y é a diagonal do paralelepípedo
    double p, b, h;
    printf("Insira os valores da base, da altura e da profundidade do paralelepipedo:\n");
    scanf("%lf %lf %lf", &b, &h, &p);
    double x = sqrt(p*p + b*b);
    float d = sqrt(h*h + x*x);
    printf("--RESULTADO--\ndiagonal = %.2lf", d);
    return 0;
}