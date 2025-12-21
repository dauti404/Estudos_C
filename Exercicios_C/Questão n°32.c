#include <stdio.h>

/*
32. Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme
a condição:
• “F1”, se N <= 10
• “F2”, se N > 10 e N <= 100
• “F3”, se n > 100
*/

int main(){

    int N;

    printf("Insira um valor para N: \n");
    scanf("%i", &N);

    if (N <= 10) {
        printf("N pertence ao grupo F1 \n \n");
    } 
    if (N > 10 && N <= 100) {
        printf("N pertence ao grupo F2 \n \n");
    } 
    if (N > 100) {
        printf("N pertence ao grupo F3 \n \n");
    }

    return 0;
}