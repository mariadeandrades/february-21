/* Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa um programa
que leia um número inteiro de 4 dígitos (assuma que o usuário digite um número com 4 dígitos) e apresente,
separadamente, o número correspondente às casas da unidade, da dezena, da centena e do milhar,
respectivamente.*/
#include <stdio.h>
int main() {
    int n, u, d, c, m;
    printf("Digite um numero com 4 casas:\n");
    if (scanf("%d", &n) != 1) {  
        printf("Entrada invalida.\n");
        return 1;
    }
    m = n/1000;
    c = (n/100)%10;
    d = (n/10)%10;
    u = n%10;
    printf("Unidades = %d\nDezenas = %d\nCentenas = %d\nMilhar = %d", u, d, c, m);
    return 0;
}