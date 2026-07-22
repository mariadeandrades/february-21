/* Desenvolver um programa para calcular a conta de água para a SANEAGO. O custo da água varia dependendo
do tipo do consumidor - residencial, comercial ou industrial. A regra para calcular a conta é: 
• Residencial: R$ 5,00 de taxa mais R$ 0,05 por m3 gastos; 
• Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 0,25 por m3 gastos acima dos 80 m3; 
• Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 0,04 por m3 gastos acima dos 100 m3; 
O programa deverá ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de água
em metros cúbicos. Como resultado imprimir a conta do cliente e o valor em real a ser pago pelo mesmo. */
//ja fiz um igualzinho em Go
#include <stdio.h>
int main () {
    float c, conta, perfil;
    printf("Selecione um numero correspondente ao seu tipo de conta:\n");
    printf("1 - Residencial\n2 - Comercial\n3 - Industrial\n");
    scanf("%f", &perfil);
    printf("Informe o seu consumo de agua mensal em metros cubicos:\n");
    scanf("%f", &c);
    if (perfil == 1){
        conta = 0.05*c + 5;
    }
    else if (perfil == 2){
        conta = 500 + (c - 80)*0.25;
    }
    else if (perfil == 3){
        conta = 800 + (c - 100)*0.04;
    }
    printf("A sua conta eh de R$%.2f", conta);
    return 0;
}