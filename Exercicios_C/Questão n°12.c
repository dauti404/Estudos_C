#include <stdio.h>

/*
12. Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;
*/

int main(){

    float celsius, farh;

    printf("Digite a temperatura em °C: \n");
    scanf("%f", &celsius);

    farh = (9 * celsius + 160) / 5;

    printf("A temperatura é: %.2f°F", farh);

    return 0;
}