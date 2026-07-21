#include <stdio.h>
int main() {
    float c, v;
    printf("Qual o valor de compra da mercadoria?\n");
    scanf("%f", &c);
    while (c <= 0) {
        printf("VAlor de compra invalido para mercadoria. Insira um valor valido:\n");
        scanf("%f", &c);
    }
    if (c < 10) {
        v = 1.7*c;
    }
    else if (c >= 10 && c < 30) {
        v = 1.5*c;
    }
    else if (c >= 30 && c < 50) {
        v = 1.4*c;
    }
    else {
        v = 1.3*c;
    }
    printf("O valor de venda da mercadoria eh de R$%.2f", v);
    return 0;
}