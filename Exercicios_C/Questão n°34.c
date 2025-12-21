#include <stdio.h>

/*
34. Construa um algoritmo que receba como entrada três valores e os imprima em
ordem crescente.
*/

/*

int main(){

    int number1, number2, number3;

    printf("Insira três valores aleatórios: \n");
    scanf("%i %i %i", &number1, &number2, &number3);

    if (number1 <= 1) {
        printf("Primeiro: %i \n", number1);
    } 

    if (number2 <= 2) {
        printf("Segundo: %i \n", number2);
    }

    if (number3 >= 3) {
        printf("Terceiro: %i \n \n", number3);
    }

    printf("Número escolhidos: %i %i %i \n \n", number1, number2, number3);

    return 0;
}*/

#include <stdio.h>

int main() {

    float valor1, valor2, valor3, temp;

    // Solicita ao usuário que insira os três valores
    printf("Digite o primeiro valor: \n");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor: \n");
    scanf("%f", &valor2);
    
    printf("Digite o terceiro valor: \n");
    scanf("%f", &valor3);

    // É comum ultilizar uma variável temporária para armazenar o valor desejado

    // Ordena os valores em ordem crescente
    if (valor1 > valor2) {
        temp = valor1;
        valor1 = valor2;
        valor2 = temp;
    }
    if (valor1 > valor3) {
        temp = valor1;
        valor1 = valor3;
        valor3 = temp;
    }
    if (valor2 > valor3) {
        temp = valor2;
        valor2 = valor3;
        valor3 = temp;
    }

    // Imprime os valores em ordem crescente
    printf("Valores em ordem crescente: %.2f, %.2f, %.2f \n \n", valor1, valor2, valor3);

    return 0;
}


