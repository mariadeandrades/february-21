/* Escreva um programa que receba uma data no formato ddmmaa (em que dd representa dois dígitos para o dia,
mm representa dois dígitos para o mês e aa representa dois dígitos para o ano), armazene-a em uma variável do
tipo int, e imprima o dia, o mês e o ano separadamente. Além disso, imprima a data no formato mmddaa. Para
fazer essa última parte, gere a data nesse formato (mmddaa) e a armazene em uma única variável do tipo int,
imprimindo-a em seguida.*/
#include <stdio.h>
int main() {
    int dia, mes, ano;
    printf("Escolha uma data no formato -dia mes ano-:\n");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Dia: %02\nMes: %02d\nAno: %02d\n", dia, mes, ano);
    char data[20];
    sprintf(data, "%02d%02d%02d", mes, dia, ano);
    printf("Data: %s", data);
    return 0;
}
//usar o %02d para receber numeros de pelo menos dois algarismos, se so tiver um algarismo 
//automaticamente coloca um zero na frente deste