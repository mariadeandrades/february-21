// Escreva um programa para ler um número inteiro e imprimir seu sucessor e seu antecessor
#include <stdio.h>
int main() {
    float n;
    printf("Digite um numero inteiro qualquer:");
    scanf("%f", &n);
    while (n != (int)n){
        printf("Digite somente numeros inteiros (ou seja, sem virgula):");
        scanf("%f", &n);
    }
    float s = n + 1;
    float a = n - 1;
    printf("O sucessor de %.0f e %.0f, e seu antecessor e %.0f.", n, s, a);
    return 0;
}