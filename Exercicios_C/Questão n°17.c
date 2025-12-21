#include <stdio.h>

/*
17. Faça um algoritmo que leia quatro números e apresente os resultados de adição
e multiplicação dos valores entre si, baseando-se na utilização da propriedade
distributiva, ou seja, se forem lidas as variáveis A, B, C e D, devem ser somadas
e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C
com D
*/

int main (){

    float numberA, numberB, numberC, numberD, somaA, multiA, somaB, multiB, somaC, multiC, somaD, multiD, somaE, multiE, somaF, multiF;

    printf("Digite os valores dos números A, B, C, D: \n");
    scanf("%f %f %f %f", &numberA, &numberB, &numberC, &numberD);

    somaA = numberA + numberB;
    multiA = numberA * numberB;

    somaB = numberA + numberC;
    multiB = numberA * numberC;

    somaC = numberA + numberD;
    multiC = numberA * numberD;

    somaD = numberB + numberC;
    multiD = numberB * numberC;

    somaE = numberB + numberD;
    multiE = numberB * numberD;

    somaF = numberC + numberD;
    multiF = numberC * numberD;

    printf("O resultado da soma 1 (A, B) é: %.2f \n", somaA);
    printf("O resultado da soma 2 (A, C) é: %.2f \n", somaB);
    printf("O resultado da soma 3 (A, D) é: %.2f \n", somaC);
    printf("O resultado da soma 4 (B, C) é: %.2f \n", somaD);
    printf("O resultado da soma 5 (B, D) é: %.2f \n", somaE);
    printf("O resultado da soma 6 (C, D) é: %.2f \n \n", somaF);

    printf("O resultado da multiplicação 1 (A, B) é: %.2f \n", multiA);
    printf("O resultado da multiplicação 2 (A, C) é: %.2f \n", multiB);
    printf("O resultado da multiplicação 3 (A, D) é: %.2f \n", multiC);
    printf("O resultado da multiplicação 4 (B, C) é: %.2f \n", multiD);
    printf("O resultado da multiplicação 5 (B, D) é: %.2f \n", multiE);
    printf("O resultado da multiplicação 6 (C, D) é: %.2f \n \n", multiF);

    return 0;
}