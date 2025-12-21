#include <stdio.h>

/*
8. Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
. area = base * altura / 2. Utilize as variáveis AREA, BASE e ALTURA e os
operadores aritméticos de multiplicação e divisão.
*/

int main() {

    int area, base, altura;

    printf("Digite o valor da base: \n");
    scanf("%i", &base);

    printf("Digite o valor da altura: \n");
    scanf("%i", &altura);

    area = (base * altura) / 2;

    printf("Resultado é: %i \n", area);

    return 0;
}