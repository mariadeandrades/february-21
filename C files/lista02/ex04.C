/* Faça um programa que leia um número do tipo float e imprima sua raiz quadrada caso o mesmo seja
positivo ou nulo. Caso ele seja negativo, mostre o seu quadrado.*/
#include <stdio.h>
#include <math.h>
int main () {
    float n, result;
    printf("Escolha um numero qualquer:\n");
    scanf("%f", &n);
    if (n >= 0) {
        result = sqrt(n);
    }
    else {
        result = pow(n, 2);
    }
    printf("Resultado = %.2f", result);
    return 0;
}