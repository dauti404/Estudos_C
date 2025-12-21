#include <stdio.h>

/*
29. Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não em
uma variável do tipo data, crie um algoritmo que leia uma data no formato
DDMMAA e imprima essa data no formato AAMMDD, onde:
• A letra D corresponde a dois algarismos representando o dia;
• A letra M corresponde a dois algarismos representando o mês;
• A letra A corresponde aos dois últimos algarismos representando o ano.
*/

int main(){

    int dia, mes, ano;

    printf("Insira o dia de nascimento: \n");
    scanf("%i", &dia);

    printf("Insira o mês de nascimento: \n");
    scanf("%i", &mes);

    printf("Insira o ano de nascimento: \n");
    scanf("%i", &ano);

    // Se usa o %O2i para adicionar o zero à esquerda no: DIA e MÊS.
    // já em ANO se usa o %04i para adicionar o zero à esquerda.
    // Se inverter a ordem dos números de nascimento, inverte a forma de colocar o zero à esquerda.
    printf("Sua data de nascimento é: %02i / %02i / %04i \n \n", dia, mes, ano);

    printf("Sua data de nascimento é: %04i / %02i / %02i \n \n", ano, mes, dia);

    return 0;
}