#include <stdio.h>

/*
21. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado
da soma do quadrado de cada valor lido.
*/

int main(){

    int numberA, numberB, soma, quadradoA, quadradoB;

    printf("Insira valores inteiros para A e B: \n");
    scanf("%i %i", &numberA, &numberB);

    quadradoA = numberA * numberA;
    quadradoB = numberB * numberB;

    soma = quadradoA + quadradoB;

    printf("O quadrado de A é: %i \n", quadradoA);
    printf("O quadrado de B é: %i \n", quadradoB);
    printf("A soma dos quadrados de A e B é: %i \n \n", soma);

    return 0;
}