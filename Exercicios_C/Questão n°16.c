#include <stdio.h>

/*
16. Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca
dos valores de forma que a variável A passe a possuir o valor da variável B e a
variável B passe a possuir o valor da variável A. Apresente os valores trocados.
*/

int main(){

    int a, b, c, d;

    printf("Digite o valor de A: \n");
    scanf("%i", &a);

    printf("Digite o valor de B: \n");
    scanf("%i", &b);

    c = a;
    d = b;

    b = c;
    a = d;

    printf("O valor de A é: %i \n", a);
    printf("O valor de B é: %i \n", b);

    return 0;
}