#include <stdio.h>

/*
46. Um hotel cobra R$ 60.00 a diária e mais uma taxa de serviços. A taxa de
serviços é de:
    • R$ 5.50 por diária, se o número de diárias for maior que 15;
    • R$ 6.00 por diária, se o número de diárias for igual a 15;
    • R$ 8.00 por diária, se o número de diárias for menor que 15.
Construa um algoritmo que mostre o nome e o total da conta de um cliente.
*/

// Constantes
#define max 100
#define valor_diaria 60

int main() {

    // Variáveis
    int num_diaria, quant_servico;
    float total_servico, total_diaria, valor_total;
    char nome_cliente[max];

    // Menu do usuário
    printf("Qual o seu nome?\n");
    scanf("%s", &nome_cliente);

    printf("\nQuantas diárias?\n");
    scanf("%i", &num_diaria);

    printf("\nQuantidade de pedidos de serviço:\n");
    scanf("%i", &quant_servico);

    // Valor da diária
    total_diaria = num_diaria * 60;

    // Compara o valor da taxa de serviço
    if (quant_servico > 15) {
        printf("Valor R$5,50 \n");
        total_servico = quant_servico * 5.50;
    }
    if (quant_servico == 15) {
        printf("Valor R$6,00 \n");
        total_servico = quant_servico * 6.00;
    }
    if (quant_servico < 15) {
        printf("Valor R$8,00 \n");
        total_servico = quant_servico * 8.00;
    }
    
    // Valor total
    valor_total = total_servico + total_diaria;

    // Folha de resultados
    printf("\n\tRecibo do cliente");
    printf("\nNome do cliente:\t%s \n", nome_cliente);
    printf("Quantidade de diárias:  %i \n", num_diaria);
    printf("Valor das diária:       R$ %.2f \n", total_diaria);
    printf("Taxa de serviços:       R$ %.2f \n", total_servico);
    printf("Valor total:            R$ %.2f \n", valor_total);

    return 0;
}