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
    // Operação de divisão padrão
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

// Função de potenciação adicinado a calculadora
float potenciacao(float number1) {
    float resultado;
    resultado = (number1 * number1);
    return resultado;
}

// Função calcular - Exibi o menu de escolha para o usuário e solicita a operação desejada
float calcular(float number1, float number2, char ch){
    // Variáveis
    int i = 1;
    float resultado;
    
    // Operações da calculadora
    printf("\nQual a operação (+, -, /, *, p): \n");
    scanf("%c", &ch);
    
    // Menu de escolha e coleta dos números digitados pelo usuário - se adapta conforme a operação
    switch (ch) {
        case 'p':
            printf("\nDigite um número: \n");
            scanf("%f", &number1);
            break;
        default:
            for(i; i <2 ; i++) {
                printf("Digite o %iº número: ", i);
                scanf("%f", &number1);
                printf("Digite o %iº número: ", i+i);
                scanf("%f", &number2);
                i++;
            }
    }
   
    // Seleciona a operação desejada pelo usuário 
    // caso seja uma operação inválida ela retorna um valor especial como padrão
    switch (ch) {
        // Usa a função somar
        case '+':
            resultado = somar(number1, number2);
            break;
        // Usa a função subtrair
        case '-':
            resultado = subtrair(number1, number2);
            break;
        // Usa a função dividir
        case '/':
            resultado = dividir(number1, number2);
            break;
        // Usa a função multiplicar
        case '*':
            resultado = multiplicar(number1, number2);
            break;
        // Caso a operação seja inválida
        case 'p':
            resultado = potenciacao(number1);
            break;
        default:
            resultado = -9999.99;
            break;
    }
    
    // Retorna o resultado obtido para a função principal 'main'
    return resultado;
}

// Função principal 'main'
int main() {
    // Variáveis  
    float number1, number2, resultado;
    int i = 1;
    char ch;
    
    // Chamamento da função 'calcular' no main
    resultado = calcular(number1, number2, ch);
    // Exibi o resultado da operação feita pelo usuário usando a operação 'calcular'
    printf("\nResultado: %.2f", resultado);
    
    return 0;
}
