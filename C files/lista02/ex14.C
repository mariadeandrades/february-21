/* Desenvolva um programa para calcular e imprimir o preço final de um carro. O valor do preço inicial de
fábrica é fornecido pelo usuário. O carro pode ter as seguintes opções: 
a) Ar condicionado (R$ 1750,00)
b) Pintura metálica (R$ 800,00)
c) Vidro elétrico (R$ 1200,00)
d) Direção hidráulica (R$ 2000,00)*/
#include <stdio.h>
int main() {
    float p, pf;
    char resposta;
    printf("Qual o preco de fabrica do carro?\n");
    scanf("%f", &p);
    pf = p;
    printf("Deseja incluir AR CONDICIONADO? [S/N]\n");
    scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's'){
        pf = pf + 1750;
    }
    printf("Deseja incluir PINTURA METALICA? [S/N]\n");
    scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's'){
        pf = pf + 800;
    }
    printf("Deseja incluir VIDRO ELETRICO? [S/N]\n");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S'){
        pf = pf + 1200;
    }
    printf("Deseja incluir DIRECAO HIDRAULICA? [S/N]\n");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta || 'S'){
        pf = pf + 2000;
    }
    printf("O preco final do seu carro eh de R$%.2f.", pf);
    return 0;
}