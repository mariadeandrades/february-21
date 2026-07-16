/*Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu rendimento, ela
deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses. Sabendo-se que a fórmula
usada para este cálculo é a apresentada a seguir, calcule e mostre o valor acumulado:
𝑣𝑎𝑙𝑜𝑟 𝑎𝑐𝑢𝑚𝑢𝑙𝑎𝑑𝑜 = 𝑃 * (1 + i)𝑛 − 1/i , onde i = taxa, P = aplicação mensal, n = número de meses*/
#include <stdio.h>
#include <math.h>
int main() {
    double p, i, n, v;
    printf("Este programa calcula o montante de um investimento financeiro. A seguir, informe:\n");
    printf("O valor constante de aplicacao mensal:\n");
    scanf("%lf", &p);
    printf("A taxa:\n");
    scanf("%lf", &i);
    printf("O numero de meses de aplicacao:\n");
    scanf("%lf", &n);
    v = (p*pow((1+i), n)-1)/i;
    printf("O montante eh R$%.2lf", v);
    return 0;
}