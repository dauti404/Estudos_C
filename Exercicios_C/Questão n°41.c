#include <stdio.h>

/*
41. A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro
vendido e mais 5% do valor das vendas. Faça um algoritmo que determine o
salário total de um vendedor.
*/

#define comissao_fixa 50
// Porcentagem: sempre divider por 100. números de um algorismo, sempre dois zero para direita. E vice-versa. 
#define perc_vendas 0.05
#define max 100

int main(){

    char nome[max];
    float salario_fixo, comissao, quant_carro, perc_ganho, valor_vendas, salario_total;

    printf("Nome do vendendor: \n");
    scanf("%s", nome);

    printf("Informe o salário do vendedor: \n");
    scanf("%f", &salario_fixo);

    printf("Quantos carros vendidos no mês: \n");
    scanf("%f", &quant_carro);

    printf("Valor das vendas: \n");
    scanf("%f", &valor_vendas);

    comissao = quant_carro * comissao_fixa;

    perc_ganho = perc_vendas * valor_vendas;

    salario_total = salario_fixo + comissao + perc_ganho;

    printf("\n  Revendedora de carros Pica-Pau Ltda \n \n");

    printf("Nome do vendedor: %s \n \n", nome);

    printf("Quantidade de carros vendidos----------->   %.2f unidades \n", quant_carro);
    printf("Comissão por carro vendido-------------->R$ %.2f \n \n", comissao);

    printf("Valor de vendas brutas------------------>R$ %.2f \n", valor_vendas);
    printf("Comissão sobre o valor de vendas-------->R$ %.2f \n \n", perc_ganho);

    printf("Salário--------------------------------->R$ %.2f \n", salario_fixo);
    printf("Salário total--------------------------->R$ %.2f \n \n", salario_total);

    return 0;
}