#include <stdio.h>

/*
37. Escreva um algoritmo que determine o número de dias que uma pessoa já viveu.
Considere que um mês tenha 30 dias.
*/

int main(){

    int dia_nas, mes_nas, ano_nas, dias, hora, meses, minutos, idade;

    printf("Digite sua idade: \n");
    scanf("%i", &idade);

    printf("Digite sua data de nascimento: \n");
    scanf("%i %i %i", &dia_nas, &mes_nas, &ano_nas);

    int tempo_dias, dia_meses;
    tempo_dias = idade * 365;

    dia_meses = mes_nas * 30;
    meses = idade * 12;    
    minutos = ano_nas * 525960;
    hora = ano_nas * 8766;

    dias = dia_meses + tempo_dias + dia_nas;

    printf("\nSua data de nascimento: %02i /%02i /%04i \n",dia_nas, mes_nas, ano_nas);
    printf("Seu tempo de vida em dia aproximadamente: %i \n", dias);
    printf("Seu tempo de vida em minutos aproximadamente: %i \n", minutos);
    printf("Seu tempo de vida em horas aproximadamente: %i \n", hora);
    printf("Seu tempo de vida em meses aproximadamente: %i \n \n", meses);
    

    return 0;
}