#include <stdio.h>

/*
20. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado
do quadrado da soma dos valores lidos.
*/

int main(){

    int numberA, numberB, soma, quadrado;

    printf("Insira valores inteiros para A e B: \n");
    scanf("%i %i", &numberA, &numberB);

    soma = numberA + numberB;
    quadrado = soma * soma;

    printf("A soma dos valores A e B é: %i \n", soma);
    printf("O quadrado da soma de A e B é: %i \n \n", quadrado);

    return 0;
}