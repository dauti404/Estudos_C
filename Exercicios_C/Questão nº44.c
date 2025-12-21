#include <stdio.h>

/*
44. Uma sorveteria vende três tipos de picolés. Sabendo-se que o picolé do tipo 1 é
vendido por R$ 0.50, o do tipo 2 por R$ 0.60 e o do tipo 3 por R$ 0.75, faça um
algoritmo que, para cada tipo de picolé, mostre a quantidade vendida e o total
arrecadado.
*/

// Constantes
#define tipo1 0.50
#define tipo2 0.60
#define tipo3 0.75

// Função
void conti();

int main() {

    // Variáveis
    float number, unidades, total;

    // Menu do usuário
    printf("\nQual o tipo de picolé: \n");
    printf("Tipo 1 --> R$ 0.50 \n");
    printf("Tipo 2 --> R$ 0.60 \n");
    printf("Tipo 3 --> R$ 0.75 \n");
    scanf("%f", &number);

    printf("\nQuantas unidades: \n");
    scanf("%f", &unidades);

    // Comparador e calculadora
    if (number == 1) {
        total = unidades * tipo1;
    }
    if (number == 2) {
        total = unidades * tipo2;
    }
    if (number == 3) {
        total = unidades * tipo3;
    }

    // Painel de valores
    printf("\n    A pagar     \n");
    printf("Quantidade: %.2f \n", unidades);
    printf("valor total: R$ %.2f \n", total);

    // Função de continuidade
    conti();

    return 0;
}


// Função de continuidade
void conti() {

    // Variáveis
    char resposta;

    // Loop
    do {
    printf("\nDeseja continuar? S/N\n");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's') {
        main();
    }
    if (resposta == 'N' || resposta == 'n') {
        break;
    }

    } while (1);

}