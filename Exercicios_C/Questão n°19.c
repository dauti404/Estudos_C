#include <stdio.h>

/*
19. Faça um algoritmo que leia um valor inteiro e apresente os resultados do
quadrado e do cubo do valor lido.
*/

int main(){

    int valor, quadrado, cubo;

    printf("Insira um valor inteiro: \n");
    scanf("%i", &valor);

    quadrado = valor * valor;
    cubo = valor * valor * valor;

    printf("O quadrado é: %i \n", quadrado);
    printf("O cubo é: %i \n \n", cubo);

    return 0;
}