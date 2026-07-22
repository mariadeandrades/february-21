/**/
#include <stdio.h>
#include <math.h>
int main() {
    float p, m, pf;
    printf("Qual o valor do produto?\n");
    scanf("%f", &p);
    printf("Qual a forma de pagamento?\n");
    printf("1 - A vista no dinheiro ou no cheque\n2 - A vista no cartao de credito\n3 - Em duas vezes sem juros\n4 - Em tres vezes\n");
    scanf("%f", &m);
    if (m == 1){
        pf = 0.9*p;
    }
    else if (m ==2){
        pf = 0.95*p;
    }
    else if (m ==3){
        pf = p;
    }
    else if (m == 4){
        pf = p + 0.1*p;
    }
    printf("Preco final = R$%.2f", pf);
    return 0;
}