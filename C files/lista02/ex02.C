/*Crie um programa que leia um valor inteiro e diga se ele é positivo, negativo ou nulo.*/
#include <stdio.h>
int main() {
    int n;
    printf("Digite um numero qualquer:\n");
    scanf("%d", &n);
    if (n < 0) {
        printf("o numero %d eh negativo.", n);
    }
    else if (n == 0) { //vc está errando isso toda vez!! = é atribuição, == é igualdade
        printf("O numero %d eh nulo.", n);
    }
    else {
        printf("O numero %d eh positivo.", n);
    }
    return 0;
}