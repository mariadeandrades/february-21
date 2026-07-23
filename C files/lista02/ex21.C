/*Escrever um programa que leia o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e
a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento do aluno, usando a
fórmula: ### e o seu conceito, usando a tabela a seguir: ### O programa deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, 
o conceito correspondente e a mensagem: APROVADO se o conceito for A, B ou C e REPROVADO, se o 
conceito for D ou E.*/
#include <stdio.h>
int main() {
    float nota1, nota2, nota3, notaex, media;
    int id;
    char conceito;
    printf("Qual o numero de matricula (sequencia de tres algarismos unica e intransferivel) do aluno?\n");
    scanf("%d", &id);
    while (id < 100 || id > 999){
        printf("Numero de matricula invalido; tente novamente:\n");
        scanf("%d", &id);
    }
    printf("Quais as tres notas do aluno?\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Qual a nota do aluno nas listas de exercicios?\n");
    scanf("%f", &notaex);
    media = (nota1 + 2*nota2 + 3*nota3 + notaex)/7;
    if (media >= 9 && media <= 10){
        conceito = 'A';
    }
    else if (media >= 7.5 && media < 9){
        conceito = 'B';
    }
    else if (media >= 6 && media < 7.5){
        conceito = 'C';
    }
    else if (media >= 4 && media < 6){
        conceito = 'D';
    }
    else if (media < 4){
        conceito = 'E';
    }
    
    if (conceito == 'A' || conceito == 'B' || conceito == 'C'){
        printf("APROVADO");
    }
    else if (conceito == 'D' || conceito == 'E'){
        printf("REPROVADO");
    }
    return 0;
}