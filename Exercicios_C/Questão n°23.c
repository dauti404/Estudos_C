#include <stdio.h>

/*
23. Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa
ordem, e imprima em ordem inversa, isto é, se os dados lidos forem 5 e 9, por
exemplo, devem ser impressos na ordem 9 e 5.
*/

int main(){

    int numA, numB, trocaA, trocaB;

    printf("Insira os valores de A e B: \n");
    scanf("%i %i", &numA, &numB);

    trocaA = numA;
    trocaB = numB;

    numA = trocaB;
    numB = trocaA;

    printf("Os números em ordem inversa são: %i e %i \n \n", numA, numB);

    return 0; 
}