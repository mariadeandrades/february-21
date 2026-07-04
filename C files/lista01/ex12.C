/*Escreva um programa que receba quatro números e imprima a média ponderada, sabendo-se que os pesos são
respectivamente: 1, 2, 3 e 4.*/
#include <stdio.h>
int main() {
    float n1;
    float n2; 
    float n3; 
    float n4;
    float m;
    printf("Este programa calcula a media ponderada de quatro numeros quaisquer.\n");
    printf("Digite, a  seguir, quatro numeros:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    m = ((1*n1)+(2*n2)+(3*n3)+(4*n4))/10;
    printf("\nA media ponderada eh %.0f.", m);
    return 0;
}