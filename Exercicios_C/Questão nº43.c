#include <stdio.h>

/* 43. Uma empresa irá dar um aumento de salário aos seus funcionários de acordo
    com a categoria de cada empregado. O aumento seguirá a seguinte regra:

    • Funcionários das categorias A, C, F, e H ganharão 10% de aumento sobre o
    salário;
    • Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre
    o salário;
    • Funcionários das categorias K e R ganharão 25% de aumento sobre o salário;
    • Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento
    sobre o salário;
    • Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento
    sobre o salário.

    Faça um algoritmo que escreva nome, categoria e salário reajustado de cada
    empregado.
*/

// Constantes
#define max 100
#define aumento_10 0.10
#define aumento_15 0.15
#define aumento_25 0.25
#define aumento_35 0.35
#define aumento_50 0.50

// Protótipos
void conti();

int main(){

    // Variáveis
    float salario_atual, salario_novo, aumento;
    char nome[max];
    char categoria;

    // Menu
    printf("\nEscreva o nome do funcionário: \n");
    scanf("%s", &nome);

    printf("Salário: \n");
    scanf("%f", &salario_atual);

    printf("Categoria: \n");
    scanf("%s", &categoria);

    // Funções de comparação para o aumento salarial.
    if (categoria == 'A' || categoria == 'a' || categoria == 'C' || categoria == 'c' || categoria == 'F' || categoria == 'f' || categoria == 'H' || 
    categoria == 'h') {
        aumento = salario_atual * aumento_10;
        salario_novo = salario_atual + aumento;
    }
    if (categoria == 'B' || categoria == 'b' || categoria == 'D' || categoria =='d' || categoria =='E' || categoria == 'e' || categoria == 'I' || 
    categoria == 'i' || categoria == 'J' || categoria == 'j' || categoria == 'T' || categoria == 't') {
        aumento = salario_atual * aumento_15;
        salario_novo = salario_atual + aumento;
    }
    if (categoria == 'K' || categoria == 'k' || categoria == 'R' || categoria == 'r') {
        aumento = salario_atual * aumento_25;
        salario_novo = salario_atual + aumento;
    }
    if (categoria == 'L' || categoria == 'l' || categoria == 'M' || categoria == 'm' || categoria == 'N' || categoria == 'n' || categoria == 'O' || 
    categoria == 'o' || categoria == 'P' || categoria == 'p' || categoria == 'Q' || categoria == 'q') {
        aumento = salario_atual * aumento_35;
        salario_novo = salario_atual + aumento;
    }
    if (categoria == 'U' || categoria == 'u' || categoria == 'V' || categoria == 'v' || categoria == 'X' || 
    categoria == 'x' || categoria == 'Y' || categoria == 'y' || categoria == 'W' || categoria == 'w' || categoria == 'Z' || categoria == 'z') {
        aumento = salario_atual * aumento_50;
        salario_novo = salario_atual + aumento;
    }

    // Painel de resultados
    printf("\nNome:             %s \n", nome);
    printf("Salário antigo:   R$ %.2f \n", salario_atual);
    printf("Aumento salarial: R$ %.2f \n", aumento);
    printf("Salário novo:     R$ %.2f \n", salario_novo);
    printf("Categoria:        %c \n", categoria);

    // Função de continuidade
    conti();

    return 0;
}


// Função de continuidade
void conti() {

    // Variável
    char resposta;

    // Comando de continuidade
    do {
        printf("\nDeseja continuar? S/N\n");
        scanf("%c", &resposta);

        if (resposta == 'S' || resposta == 's') {
            main();
        }
        if (resposta == 'N' || resposta == 'n') {
            break;
        }
    } while (1);

}