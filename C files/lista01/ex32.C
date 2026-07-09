/* Faça um programa que leia o tempo de duração de um evento em uma fábrica expresso em segundos e mostre
o expresso em horas, minutos e segundos.*/
#include <stdio.h>
int main() {
    int t;
    printf("Qual o tempo de duracao do evento, em segundos?\n");
    scanf("%d", &t);
    int h = t/3600;
    int m = (t%3600)/60;
    int s = t%60;
    printf("Horario: %d horas %d minutos %d segundos", h, m, s);
    return 0;
}