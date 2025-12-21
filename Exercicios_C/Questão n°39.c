#include <stdio.h>

/*
39. Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota
do troco. Suponha que o sistema monetário não utilize moedas.
*/

int main(){

    int troco1, troco10, troco100, valor_compra, quant_troco, valor_pago;

    printf("Insira o valor da compra: \n");
    scanf("%i", &valor_compra);

    printf("Valor pago pelo cliente: \n");
    scanf("%i", &valor_pago);

    quant_troco = valor_pago - valor_compra;

    troco100 = quant_troco / 100;
    troco10 = (quant_troco / 10) % 10;
    troco1 = quant_troco % 10;

    printf("\n  Recibo do cliente \n");
    printf("Total das compras: R$ %i \n", valor_compra);
    printf("Valor do troco: R$ -%i \n", quant_troco);
    printf("Troco em notas de R$ 1.00: %i notas \n", troco1);
    printf("Troco em notas de R$ 10.00: %i notas\n", troco10);
    printf("Troco em notas de R$ 100.00: %i notas \n \n", troco100);

    return 0;
}