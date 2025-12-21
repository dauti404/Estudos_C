#include <stdio.h>

/*
10. Faça um algoritmo que:
a) Leia um número inteiro;
b) Leia um segundo número inteiro;
c) Efetue a adição dos dois valores;
d) Apresente o valor calculado.
*/

int main(){

    int number1, number2, soma;

    printf("Escreva um número: \n");
    scanf("%i", &number1);

    printf("Escreva outro número: \n");
    scanf("%i", &number2);

    soma = number1 + number2;

    printf("A soma dos número é:\n%i", soma);

    return 0;
}