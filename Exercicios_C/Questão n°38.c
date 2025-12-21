#include <stdio.h>

/*
38. Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que
informe se a soma de A com B é menor, maior ou igual a C
*/

int main(){

    int soma, a, b, c;

    printf("Insira os valores de A, B e C: \n");
    scanf("%i %i %i", &a, &b, &c);

    soma = a + b;

    if (soma > c) {
        printf("\nA soma de A com B é maior que C. \n \n");
    } 
    if (soma == c) {
        printf("\nA soma de A com B é igual a C. \n \n");
    }
    if (soma < c) {
        printf("\nA soma de A com B é menor que C. \n \n");
    }

    return 0;
}