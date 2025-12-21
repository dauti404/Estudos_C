#include <stdio.h>

/*
36. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda
de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor
vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$
50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro
caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório
contendo nome, valor da venda e comissão de cada um dos corretores. O
relatório deve mostrar também o total de vendas da empresa.
*/

int main() {
    // Defina as informações dos corretores
    char nomes[3][50];

    // Os vetores também podem ser do tipo inteiro ou float.
    float vendas[3];
    float comissoes[3];
    float total_vendas_empresa = 0;

    // Preencha as informações dos corretores.
    for (int i = 0; i < 3; i++) {
        printf("Nome do Corretor %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Valor da Venda do Corretor %d: R$ ", i + 1);
        scanf("%f", &vendas[i]);

        // Calcule a comissão com base nas regras.
        if (vendas[i] > 50000.00) {
            comissoes[i] = vendas[i] * 0.12;
        } else if (vendas[i] >= 30000.00) {
            comissoes[i] = vendas[i] * 0.095;
        } else {
            comissoes[i] = vendas[i] * 0.07;
        }

        total_vendas_empresa += vendas[i];
    }

    // Imprima o relatório para cada corretor
    printf("\nRelatório de Vendas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", nomes[i]);
        printf("Valor da Venda: R$ %.2f\n", vendas[i]);
        printf("Comissão: R$ %.2f\n\n", comissoes[i]);
    }

    // Imprima o total de vendas da empresa
    printf("Total de Vendas da Empresa: R$ %.2f\n", total_vendas_empresa);

    return 0;
}


