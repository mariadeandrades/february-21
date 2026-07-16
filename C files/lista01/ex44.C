#include <stdio.h>
int main() {
    float kilo, grama, novo;
    printf("Qual o seu peso, em kg?\n");
    scanf("%f", &kilo);
    grama = kilo*1000;
    printf("O peso em gramas eh %.2f.\n", grama);
    novo = 1.12*grama;
    printf("O peso final, apos ganho de 12/100 de massa, eh %.2f.", novo);
    return 0;
}