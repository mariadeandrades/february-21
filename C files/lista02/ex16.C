/* Desenvolver um programa que leia os coeficientes (A, B e C) de uma equação do segundo grau ( Ax2 + Bx + C
=0) e que calcule suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a
classificação das mesmas: “RAÍZES IMAGINÁRIAS”, “RAIZ ÚNICA” ou “RAÍZES DISTINTAS”. */
#include <stdio.h>
#include <math.h>
int main() {
    float A, B, C, delta, raizDelta, potB, x1, x2;
    printf("Este programa soluciona equacoes de segundo grau.\nInforme os coeficientes A, B e C da equacao:\n");
    scanf("%f %f %f", &A, &B, &C);
    potB = pow(B, 2);
    delta = potB - (4*A*C);
    if (delta > 0){
        raizDelta = sqrt(delta);
        x1 = (B*(-1) - raizDelta)/2*A;
        x2 = (B*(-1) + raizDelta)/2*A;
        printf("Duas raizes reais diferentes. X1 = %.2f X2 = %.2f", x1, x2);
    }
    else if (delta == 0){
        raizDelta = sqrt(delta);
        x1 = (B*(-1) - raizDelta)/2*A;
        printf("Duas raizes reais iguais. X = %.2f", x1);
    }
    else if (delta < 0){
        printf("Nao ha raizes reais.");
    }
    return 0;
}