#include <stdio.h>

/*
11. Faça um algoritmo que:
a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
b) Obtenha o valor para a variável VH (valor hora trabalhada):
c) Obtenha o valor para a variável PD (percentual de desconto);
d) Calcule o salário bruto => SB = HT * VH;
e) Calcule o total de desconto => TD = (PD/100)*SB;
f) Calcule o salário líquido => SL = SB – TD;
g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário
Liquido.
*/

int main(){

    float horaTra, horaDia, diatra,  Valorhora, perc_Desc, salBruto, salLiquido, totalDesc;

    printf("Dias trabalhados: \n");
    scanf("%f", &diatra);

    printf("Horas trabalhadas por dia: \n");
    scanf("%f", &horaDia);

    printf("Valor por hora: \n");
    scanf("%f", &Valorhora);

    printf("Percentual de desconto: \n");
    scanf("%f", &perc_Desc);

    horaTra = diatra * horaDia;

    salBruto = horaTra * Valorhora;

    totalDesc = (perc_Desc / 100) * salBruto;

    salLiquido = salBruto - totalDesc;

    printf("Dias trabalhados: %.2f d \n", diatra);
    printf("Horas trabalhadas: %.2f h \n", horaTra);
    printf("Horas trabalhadas por dia: %.2f h/d \n", horaDia);
    printf("Salário bruto: R$ %.2f \n", salBruto);
    printf("Percentual de desconto: %.2f \n", perc_Desc);
    printf("Total de desconto: R$ -%.2f \n", totalDesc);
    printf("Salario líquido: R$ %.2f \n", salLiquido);

    return 0;
}