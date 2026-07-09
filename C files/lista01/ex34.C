/*Escreva um programa que leia uma temperatura em graus centígrados e apresente-a convertida em graus Fahrenheit.
A fórmula de conversão é: 𝐹 =(9 * 𝐶 + 160)/5 , onde F é a temperatura em Fahrenheit e C é a temperatura em graus celsius.*/
#include <stdio.h>
int main() {
    float C, F;
    printf("Este programa converte temperaturas de Celsius para Fahrenheit.\n");
    printf("Qual a temperatura em Celsius que deseja converter?\n");
    scanf("%f", &C);
    F = (9*C + 160)/5;
    printf("Temperatura em Fahrenheit = %.2f", F);
    return 0;
}