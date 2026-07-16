#include <stdio.h>
int main() {
    int lcd, led, plasma;
    float salario;
    printf("A seguir, informe quantas TVs de cada tipo voce vendeu no ultimo mes:\n");
    printf("TV LCD:\n");
    scanf("%d", &lcd);
    printf("TV LED:\n");
    scanf("%d", &led);
    printf("TV Plasma:\n");
    scanf("%d", &plasma);
    salario = 3242 + lcd*50 + led*60 + plasma*55;
    printf("Salario reajustado com comissao = R$%.2f", salario);
    return 0;
}