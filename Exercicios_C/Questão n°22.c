#include <stdio.h>

/*
22. Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua
média na variável Media e imprima seu valor.
*/

int main(){

    float val1, val2, val3, media;

    printf("Insira as notas do aluno: \n");
    scanf("%f %f %f", &val1, &val2, &val3);

    media = (val1 + val2 + val3) / 3;

    printf("A média do aluno é: %.2f \n \n", media);

    return 0;
}