//não consegui resolver esse, deixei a resolução aqui pra tentar de novo depois 

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int conta, d1, d2, d3, inverso, soma;
    char soma_str[10];
    int soma_ponderada = 0;
    int digito_verificador;
    printf("Digite o numero da conta corrente (3 digitos): ");
    if (scanf("%d", &conta) != 1) {  se o n de digitos obtidos satisfatoriamente pelo scanf for menor q 1: 
        printf("Entrada invalida.\n");
        return 1;
    }
    d1 = conta / 100;         
    d2 = (conta / 10) % 10;   
    d3 = conta % 10;          
    inverso = (d3 * 100) + (d2 * 10) + d1;
    soma = conta + inverso;
    printf("Soma (%d + %d) = %d\n", conta, inverso, soma);
    sprintf(soma_str, "%d", soma);
    for (int i = 0; soma_str[i] != '\0'; i++) {
        int digito = soma_str[i] - '0'; 
        int posicao = i + 1;
        soma_ponderada += digito * posicao;
        printf("  Digito %d x Posicao %d = %d\n", digito, posicao, digito * posicao);
    }
    digito_verificador = soma_ponderada % 10;
    printf("Soma ponderada total: %d\n", soma_ponderada);
    printf("Digito Verificador: %d\n", digito_verificador);
    return 0;
}
    */