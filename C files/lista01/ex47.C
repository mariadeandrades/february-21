/*Dado um polígono convexo de n lados, podemos calcular o número de diagonais diferentes (nd) desse polígono
pela fórmula: nd = n (n-3) / 2. Faça um programa que leia quantos lados tem o polígono, calcule e escreva o
número de diagonais diferentes (nd) do mesmo.*/
#include <stdio.h>
int main() {
    int n, nd;
    printf("Quantos lados tem o poligono?\n");
    scanf("%d", &n);
    nd = n * (n - 3)/2;
    printf("O poligono tem %d diagonais diferentes.", nd);
    return 0;
}