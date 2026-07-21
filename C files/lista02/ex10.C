#include <stdio.h>
int main() {
    char destino, tipo;
    float valor;
    printf("Para onde voce quer viajar?\n");
    scanf("%c", &destino);
    printf("Sua passagem sera de ida, ou de ida e volta?\n");
    scanf("%c", &tipo);
    if (destino == 'Regiao Norte'){
        if (tipo == 'ida'){
            valor = 500;
        }
        else {
            valor = 900;
        } 
    }    
    else if (destino == 'Regiao Nordeste'){
        if (tipo == 'ida'){
            valor = 350;
        }
        else {
            valor = 650;
        }
    }    
    else if (destino == 'Regiao Centro Oeste'){
        if (tipo == 'ida'){
            valor = 350;
        }
        else if (tipo == 'ida e volta'){
            valor = 600;
        }
    } 
    else if (destino == 'Regiao Sul'){
        if (tipo == 'ida'){
            valor = 300;
        }
        else if (tipo == 'ida e volta'){
            valor = 550;
        }    
    }  
    else {
        printf("Destino invalido.");
    } 
    printf("Destino: %c\nPassagem: %c\nValor da passagem: %.2f", destino, tipo, valor);
    return 0;
}
//resolução sugerida:
/*#include <stdio.h>

int main() {
    int destino, tipo;
    float valor = 0;

    // Menu de Destinos
    printf("Para onde voce quer viajar?\n");
    printf("1 - Regiao Norte\n");
    printf("2 - Regiao Nordeste\n");
    printf("3 - Regiao Centro-Oeste\n");
    printf("4 - Regiao Sul\n");
    printf("Escolha uma opcao (1-4): ");
    scanf("%d", &destino);

    // Menu de Tipo de Passagem
    printf("\nSua passagem sera:\n");
    printf("1 - Somente Ida\n");
    printf("2 - Ida e Volta\n");
    printf("Escolha uma opcao (1-2): ");
    scanf("%d", &tipo);

    // Processamento dos valores
    if (destino == 1) { // Norte
        if (tipo == 1) valor = 500;
        else valor = 900;
    }    
    else if (destino == 2) { // Nordeste
        if (tipo == 1) valor = 350;
        else valor = 650;
    }    
    else if (destino == 3) { // Centro-Oeste
        if (tipo == 1) valor = 350;
        else valor = 600;
    } 
    else if (destino == 4) { // Sul
        if (tipo == 1) valor = 300;
        else valor = 550;
    }  
    else {
        printf("\nDestino invalido.\n");
        return 1; // Encerra o programa indicando erro
    } 

    // Validação do tipo de passagem
    if (tipo != 1 && tipo != 2) {
        printf("\nTipo de passagem invalido.\n");
        return 1;
    }

    // Exibição do Resultado
    printf("\n=============================\n");
    printf("Valor da passagem: R$ %.2f\n", valor);
    printf("=============================\n");

    return 0;
}*/