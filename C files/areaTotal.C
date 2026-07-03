/*Este programa calcula a área total de uma residência, composta por região interna e região da psicina.
A área interna corresponde à soma das áraes do quarto e do banheiro, que são iguais. A piscina é 
circular, e sua aárea é calculada pela fórmula da área de um círculo qualquer. A área da residência, 
por fim, é encontrada pela soma da área interna e da piscina.*/

#include <stdio.h>
#include <math.h>

double metro = 5;

double areaCasa() {
    float lateral = 11;
    float cquarto = 7;
    float areas = lateral * lateral;
    float areaq = cquarto * (lateral/2);
    float areat = areas + 2 * areaq;
    printf("A area interna da casa e %.2f metros quadrados.\n\n", areat); //printa float com precião de duas casas decimais
    return areat;
}

double areaPiscina() {
    double raio = 2;
    double areap;
    areap = M_PI * pow(raio,2);
    printf("A area da piscina e %.2f metros quadrados.\n\n", areap);
    return areap;
}

int main() { 
    double areat = areaCasa(); //chamando a função areaCasa
    double areap = areaPiscina(); //chamando a função areaPiscina
    double areaf;
    areaf = areap + areat;
    printf("A area construida dessa residencia e de %.2f metros quadrados.\n\n", areaf);
    double valor = areaf * metro;
    printf("O valor dessa residencia e %.2f -considerando um metro quadrado de R$%.2f.", valor, metro);
}
