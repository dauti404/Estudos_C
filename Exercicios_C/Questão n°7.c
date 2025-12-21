#include <stdio.h>

/*
7. Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula ÁREA = π * RAIO2. Utilize as variáveis AREA e RAIO, a constante π (pi =
3,14159) e os operadores aritméticos de multiplicação.
*/

#define pi 3.14159 

int main() {

    float area, raio;

    printf("Qual o tamanho do raio? \n");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("O resultado é: %.2f ", area);

    return 0;
}