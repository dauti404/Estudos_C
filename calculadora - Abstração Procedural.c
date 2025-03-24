#include <stdio.h>

// Funções da calculadora
float somar(float number1, float number2) {
    float resultado;
    resultado = number1 + number2;
    return resultado;
}

float subtrair(float number1, float number2) {
    float resultado;
    resultado = number1 - number2;
    return resultado;
}

float dividir(float number1, float number2) {
  float resultado;
    // Tratamento de divisão por '0' zero
    if (number2 == 0) {
        printf("\nOperação inválida");
        resultado = -9999.99;
    } 
    // Operação padrão de divisão
    else {
        resultado = number1 / number2;
    }
    return resultado;
}

float multiplicar(float number1, float number2) {
    float resultado;
    resultado = number1 * number2;
    return resultado;
}

// Main
int main() {
    // Variáveis 
    float number1, number2, resultado;
    int i = 1;
    char ch;

    // Menu de operações da calculadora
    printf("\nQual a operação (+, -, /, *): \n");
    scanf("%c", &ch);
    
    // Menu de coleta dos números digitados pelo usuário    
    for(i; i <2 ; i++) {
        printf("Digite o %iº número: ", i);
        scanf("%f", &number1);
        printf("Digite o %iº número: ", i+i);
        scanf("%f", &number2);
        i++;
    }

    // Laços if's que chamam a operação desejada pelo usuário
    if (ch == '+') {
        resultado = somar(number1, number2);
    }
    if (ch == '-') {
        resultado = subtrair(number1, number2);
    }
    if (ch == '/') {
        resultado = dividir(number1, number2);
    }
    if (ch == '*') {
       resultado = multiplicar(number1, number2);
    }

    // Exibi o resultado obtido para o usuário
    printf("Resultado: %.2f", resultado);
    
    return 0;
}
   
