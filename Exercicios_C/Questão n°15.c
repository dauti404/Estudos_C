#include <stdio.h>

/*
15. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em
uma viagem, utilizando um automóvel que faz 12Km por litro. Para obter o
cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média
durante ela. Desta forma, será possível obter a distância percorrida com a
fórmula DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância,
basta calcular a quantidade de litros de combustível utilizada na viagem com a
fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os
valores da velocidade média, tempo gasto na viagem, a distância percorrida e a
quantidade de litros utilizada na viagem.
*/

int main(){

    float tempoViagem, velocidadeMedia, distancia, quaLitros;

    printf("Tempo de duração da viagem: \n");
    scanf("%f", &tempoViagem);

    printf("Sua velocidade média: \n");
    scanf("%f", &velocidadeMedia);

    distancia = tempoViagem * velocidadeMedia;

    quaLitros = distancia / 12;

    printf("Seu tempo de viagem: %.2f Horas\n", tempoViagem);
    printf("Sua velocidade média: %.2f Km/h \n", velocidadeMedia);
    printf("Distância percorrida: %.2f Km\n", distancia);
    printf("Quantidade de litros de gasolina gastos: %.2f litros\n", quaLitros);

    return 0;
}