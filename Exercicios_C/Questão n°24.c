#include <stdio.h>

/*
24. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e
imprima a velocidade em m/s (metros por segundo).
*/

int main(){

    float velocidade, metros, tempo, segundos;

    printf("Insira a velocidade em Km/h e o tempo em minutos: \n");
    scanf("%f %f", &velocidade, &tempo);

    metros = velocidade / 3.6;
    segundos = tempo / 3600;

    printf("Sua velocidade em m/s é: %.2f / %.2f m/s \n \n", metros, segundos);

    return 0; 
}