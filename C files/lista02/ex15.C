/* Faça um programa que leia uma data (dia, mês e ano, em uma variável inteira cada), e escreva a mesma data
no formato dia de (mês por extenso) de ano.*/
#include <stdio.h>
int main() {
    int d, m, a;
    printf("Informe a data no seguinte formato DIA MES ANO, e tecle ENTER em seguida:\n");
    scanf("%d %d %d", &d, &m, &a);
    while (d <= 0 || d >= 32 || m <= 0 || m >= 12 || a < 0){
        printf("Data invalida; tente novamente:\n");
        scanf("%d %d %d", &d, &m, &a);
    }
    if (m == 1){
        printf("DATA: dia %d de janeiro de %d.", d, a);
    }
    else if (m == 2){
        printf("DATA: dia %d de fevereiro de %d.", d, a);
    }
    else if (m == 3){
        printf("DATA: dia %d de marco de %d.", d, a);
    }
    else if (m == 4){
        printf("DATA: dia %d de abril de %d.", d, a);
    }
    else if (m == 5){
        printf("DATA: dia %d de maio de %d.", d, a);
    }
    else if (m == 6){
        printf("DATA: dia %d de junho de %d.", d, a);
    }
    else if (m == 7){
        printf("DATA: dia %d de julho de %d.", d, a);
    }
    else if (m == 8){
        printf("DATA: dia %d de agosto de %d.", d, a);
    }
    else if (m == 9){
        printf("DATA: dia %d de setembro de %d.", d, a);
    }
    else if (m == 10){
        printf("DATA: dia %d de outubro de %d.", d, a);
    }
    else if (m == 11){
        printf("DATA: dia %d de novembro de %d.", d, a);
    }
    else if (m == 12){
        printf("DATA: dia %d de dezembro de %d.", d, a);
    }
    return 0;
}
