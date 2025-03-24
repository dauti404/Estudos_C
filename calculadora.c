#include <stdio.h>

// Main
int main() {
    // Variáveis
    float number1, number2;
    int i = 1;
    char ch;
    float soma, subtracao, divisao, multiplicacao, resultado;
    
    // Menu de operações da calculadora
    printf("\nQual a operação (+, -, /, *): \n");
    scanf("%c", &ch);
        
    // Comandos que coleta os números inseridos pelo usuário
    for(i; i <2 ; i++) {
        printf("Digite o %iº número: ", i);
        scanf("%f", &number1);
        printf("Digite o %iº número: ", i+i);
        scanf("%f", &number2);
        i++;
    }
    
    // Comandos if's que seleciona a operação desejada pelo usuário	    
    if (ch == '+') {
        soma = number1 + number2;
        printf("Resultado: %.2f", soma);    
    }
    if (ch == '-') {
        subtracao = number1 - number2;
        printf("Resultado: %.2f", subtracao);
    }
    if (ch == '/') {
	    // Tratamento de divisão por '0' zero
	    if (number2 == 0) {
	        printf("\nOperação inválida");
	        resultado = -9999.99;
	    }
            // Operação de divisão padrão   
	    else {
            divisao = number1 / number2;
            printf("Resultado: %.2f", divisao);
	    }
    }
    if (ch == '*') {
        multiplicacao = number1 * number2;
        printf("Resultado: %.2f", multiplicacao);
    }
    
    return 0;
}
