#include <stdio.h>

/*
42. Uma pessoa comprou quatro artigos em uma loja. Para cada artigo, tem-se
nome, preço e percentual de desconto. Faça um algoritmo que imprima nome,
preço e preço com desconto de cada artigo e o total a pagar.
*/

#define max 100

int main(){

    char nome[max];
    /*
    for (int i = 0; i < 3; i++) {
        printf("Nome do Corretor %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Valor da Venda do Corretor %d: R$ ", i + 1);
        scanf("%f", &vendas[i]);
    */

    char produto1, produto2, produto3, produto4;

    for (int i = 0; i < 4; i++){
        printf("Nome do produto %d: ", i + 1);
        scanf("%s", nome);
    }

    produto1 = nome;
    produto2 = nome;
    produto3 = nome;
    produto4 = nome;

    printf("Produto 1: %s \n", produto1);
    printf("Produto 2: %s \n", produto2);
    printf("Produto 3: %s \n", produto3);
    printf("Produto 4: %s \n", produto4);
    
    /*
    for (int i = 0; i < 4; i++){
        printf("Produtos comprados %d: %s \n", i + 1, nome);
    }*/

    return 0;
}