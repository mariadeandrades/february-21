/*Escreva um programa para ler dois números reais e imprimir a média aritmética com a mensagem “Média”
antes do resultado*/
#include <stdio.h>
int main() {
    float n1; 
    float n2;
    printf("Digite dois numeros reais a seguir:");
    scanf("%f %f", &n1, &n2);
    float m = (n1 + n2)/2;
    printf("Media = %.1f", m);
    return 0;
}