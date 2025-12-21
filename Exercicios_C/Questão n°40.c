#include <stdio.h>

/*
40. Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e
arruelas. Têm-se os preços unitários de cada tipo de peça e sabe-se que sobre
estes preços incidem descontos de 10% para porcas, 20% para parafusos e 30%
para arruelas. Escreva um algoritmo que calcule o valor total da compra de um
cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça
que o mesmo comprou, o total de desconto e o total a pagar pela compra.
*/

#define max 100

#define preco_porcas 1.25
#define preco_parafusos 1.55
#define preco_arruelas 0.75

#define perc_porcas 0.10
#define perc_parafusos 0.20
#define perc_arruelas 0.30

int main(){

    char nome[max];
    float porcas, parafusos, arruelas, total_desc;

    printf("Nome do cliente: \n");
    scanf("%s", nome);

    printf("Insira a quantidade de porcas: \n");
    scanf("%f", &porcas);

    printf("Insira a quantidade de parafusos: \n");
    scanf("%f", &parafusos);

    printf("Insira a quantidade de arruelas: \n");
    scanf("%f", &arruelas);

    float valor_parafusos, valor_porcas, valor_arruelas, total_compra;
    float desc_porcas, desc_parafusos, desc_arruelas, valor_compra;
    float valor_desc_porcas, valor_desc_parafusos, valor_desc_arruelas, valor_compra_desc;

    valor_porcas = porcas * preco_porcas;
    valor_parafusos = parafusos * preco_parafusos; 
    valor_arruelas= arruelas * preco_arruelas;

    desc_porcas = perc_porcas * valor_porcas;
    desc_parafusos = perc_parafusos * valor_parafusos;
    desc_arruelas = perc_arruelas * valor_arruelas;

    valor_desc_porcas = valor_porcas - desc_porcas;
    valor_desc_parafusos = valor_parafusos - desc_parafusos;
    valor_desc_arruelas = valor_arruelas - desc_arruelas;
    
    total_desc = desc_porcas + desc_parafusos + desc_arruelas;
    total_compra = valor_porcas + valor_parafusos + valor_arruelas;

    valor_compra = valor_porcas + valor_parafusos + valor_arruelas;
    valor_compra_desc = total_compra - total_desc;
    
    printf("\n      Recibo do Cliente: \n \n");
    printf("Nome: %s \n", nome);
    printf("Porcas------------------------------>R$ %.2f \n", valor_porcas);
    printf("Parafusos--------------------------->R$ %.2f \n", valor_parafusos);
    printf("Arruelas---------------------------->R$ %.2f \n \n", valor_arruelas);

    printf("Desconto // porcas------------------>R$ -%.2f \n", desc_porcas);
    printf("Desconto // parafusos--------------->R$ -%.2f \n", desc_parafusos);
    printf("Desconto // arruelas---------------->R$ -%.2f \n \n", desc_arruelas);

    printf("Valor com desconto // porcas-------->R$ %.2f \n", valor_desc_porcas);
    printf("Valor com desconto // parafusos----->R$ %.2f \n", valor_desc_parafusos);
    printf("Valor com desconto // arruelas------>R$ %.2f \n \n", valor_desc_arruelas);
    
    printf("Total da compra--------------------->R$ %.2f \n", valor_compra);
    printf("Desconto---------------------------->R$ -%.2f \n", total_desc);
    printf("Subtotal da compra------------------>R$ %.2f \n \n", valor_compra_desc);

    return 0;
}