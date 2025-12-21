#include <stdio.h> 

/*
13. Faça um algoritmo que leia uma temperatura em Fahrenheit e a apresente
convertida em graus Celsius. A fórmula de conversão é C = (F – 32) * ( 5 / 9), na
qual F é a temperatura em Fahrenheit e C é a temperatura em Celcius.
*/

int main(){

    float celsius, farh;

    printf("Digite a temperatura em °F: \n");
    scanf("%f", &farh);

    celsius = (farh - 32) * 5 / 9;

    printf("A temperatura é: %.2f°C", celsius);

    return 0;
}