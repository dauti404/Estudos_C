#include <stdio.h>

/*
18. Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e
ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o
cálculo a fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA.
*/

int main(){

    float comprimento, largura, altura, volume;

    printf("Escreve o comprimento, largura e altura do objeto: \n");
    scanf("%f %f %f", &comprimento, &altura, &largura);

    volume = comprimento * largura * altura;

    printf("O volume é: %.2f \n \n", volume);

    return 0;
}