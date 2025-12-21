#include <stdio.h>

/*
25. Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o
quociente e o resto da divisão inteira de Int1 por Int2.
*/

int main (){

    int int1, int2, resto;
    
    printf("Insira dos números A e B: \n");
    scanf("%i %i", &int1, &int2);

    // Para achar o resto de uma divisão, é necessário usar o operador (%).
    resto = int1 % int2;

    printf("O resto da divisão é: %i. \n \n", resto);

    return 0;
}