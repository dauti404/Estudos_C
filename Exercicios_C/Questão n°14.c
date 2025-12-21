#include <stdio.h>

/*
14. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de
óleo, utilizando a fórmula VOLUME = 3,14159 * RAIO2 * ALTURA.
*/

#define pi 3.14159

int main(){

    float volume, raio, altura;

    printf("Digite o raio do objeto: \n");
    scanf("%f", &raio);

    printf("Digite a altura do objeto: \n");
    scanf("%f", &altura);

    volume = pi * ((raio * raio) * altura);

    printf("O volume do objeto é: %.2f", volume);

    return 0;
}