/* Escreva um programa que leia um valor de hora (no formato horas e minutos uma variável para cada) e informe
quantos minutos se passaram desde o início do dia (00 horas e 00 minutos).*/
#include <stdio.h>
int main() {
    int h, m, t;
    printf("Que horas sao? Informe no formato HORAS MINUTOS, e depois tecle ENTER:\n");
    scanf("%d %d", &h, &m);
    t = h*60 + m;
    printf("Passaram-se %d minutos desde o inicio do dia.", t);
    return 0;
}