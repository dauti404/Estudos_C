#include <stdio.h>

/*
31. Faça um algoritmo que leia dois números A e B e imprima o maior deles.
*/

int main(){

    int A, B;

    printf("Insira valores para A e B: \n");
    scanf("%i %i", &A, &B);

    if (A > B){
        printf("A é maior que B \n \n");
    } else {
        printf("B é maior que A \n \n");
    }

    return 0;
}