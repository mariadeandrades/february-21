/* Uma locadora tem as seguintes regras para aluguel de DVDs: 
- Às segundas, terças e quintas (2, 3 e 5) : desconto de 40% em relação ao preço normal;
 - Às quartas , sextas, sábados e domingos (4,6 ,7 e 1): preço normal; 
 - Aluguel de DVDs comuns: preço normal; 
 - Aluguel de lançamentos: acréscimo de 15% em relação ao preço normal. 
Desenvolver um programa para ler o preço normal do DVD alugado (em R$) e sua categoria (comum ou
lançamento). Calcular e imprimir o preço final que será pago pela locação do DVD. */
#include <stdio.h>
int main() {
    float p, c, pf, d;
    printf("Qual o valor do aluguel normal dos DVDs?\n");
    scanf("%f", &p);
    printf("Qual categoria de DVD deseja alugar?\n");
    printf("1 - DVD comum\n2 - DVD lancamento\n");
    scanf("%f", &c);
    printf("Qual dia da semana deseja efetuar o aluguel do DVD?\n");
    printf("1 - Segunda-feira\n2 - Terca-feira\n3 - Quarta-feira\n4 - Quinta-feira\n5 - Sexta-feira\n6 - Sabado\n7 - Domingo\n");
    scanf("%f", &d);
    if (c == 1){
        if (d == 1 || d == 2 || d == 4){
            pf = 0.6*p;
        }
        else if (d == 3 || d == 5 || d == 6 || d == 7){
            pf = p;
        }
    }
    else if (c == 2){
         if (d == 1 || d == 2 || d == 4){
            pf = 0.6*p*1.15;
        }
        else if (d == 3 || d == 5 || d == 6 || d == 7){
            pf = 1.15*p;
        }
    }
    printf("Preco final do DVD = R$%.2f", pf);
    return 0;
}