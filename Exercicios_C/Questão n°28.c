#include <stdio.h>

/*
28. Dado um número de três algarismos N = CDU (onde C é o algarismo das
centenas, D é o algarismo das dezenas e U o algarismo das unidades),
considere o número M constituído pelos algarismos de N em ordem inversa, isto
é, M = UDC. Gerar M a partir de N (p.ex.: N = 123 -> M = 321).
*/

int main(){

    int N, M, cen, den, uni;

    printf("Escreva um número com três algorismos: \n");
    scanf("%i", &N);

    cen = N / 100;
    den = (N / 10) % 10;
    uni = N % 10;

    M = uni * 100 + den * 10 + cen;

    printf("O número é: %i \n", cen);
    printf("O número é: %i \n", den);
    printf("O número é: %i \n \n", uni);

    printf("O número invertido é: %i \n \n", M);

    return 0;
}