/*Escreva um programa que receba um número do formado CDU e o imprima invertido: UDC. (Exemplo: 123,
sairá 321). O número deverá ser armazenado em outra variável antes de ser impresso.*/
//receber centena-dezena-unidade e devolver unidade-dezena-centena
#include <stdio.h>
int main() {
    int c, d, u;
    printf("Digite um numero de tres casas no seguinte formato -C U D-,\ndando tab entre os algarismos, e depois aperte enter:\n");
    scanf("%d %d %d", &c, &d, &u);
    char num[20];
    sprintf(num, "%d%d%d", u, d, c);
    printf("Numero: %s", num);
    return 0;
}
