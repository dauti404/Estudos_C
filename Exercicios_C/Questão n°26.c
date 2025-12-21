#include <stdio.h>

/*
26. Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto
do trabalhador como contribuição à previdência social. Após esse desconto, há
um outro desconto de 5% sobre o valor restante do salário bruto, a título de um
determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e
imprima o seu salário líquido.
*/

int main(){

    float salbruto, salliquido, previdencia, desc_prev, imposto, desc_imposto, perc_desc;

    printf("Insira o salário bruto do trabalhador: \n");
    scanf("%f", &salbruto);

    printf("Contribuição para previdência social: \n");
    scanf("%f", &perc_desc);

    printf("Impostos adicionais: \n");
    scanf("%f", &imposto);

    previdencia = salbruto * (perc_desc / 100);

    desc_prev = salbruto - previdencia;
    
    desc_imposto = desc_prev * (imposto / 100);

    salliquido = salbruto - (previdencia + desc_imposto);

    printf("Salário bruto: R$ %.2f \n", salbruto);
    printf("Previdência social: R$ %.2f \n", previdencia);
    printf("Desconto de impostos adicionais: R$ - %.2f \n", desc_imposto);
    printf("Salário líquido: R$ %.2f \n \n", salliquido);

    return 0;
}