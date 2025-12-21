#include <stdio.h>

/*
30. Suponha que uma escola utilize, como código de matrícula, um número inteiro
no formato AASDDD, onde:

• Os dois primeiros dígitos, representados pela letra A, são os dois últimos
algarismos do ano da matrícula;

• O terceiro dígito, representado pela letra S, vale 1 ou 2, conforme o aluno
tenha se matriculado no 1º ou 2º semestre;

• Os quatro últimos dígitos, representados pela letra D, correspondem à ordem
da matrícula do aluno, no semestre e no ano em questão.

Crie um algoritmo que leia o número de matrícula de um aluno e imprima o ano
e o semestre em que ele foi matriculado.
*/

/*
int main(){

    int AA, S, D, DD, ano_matricula, ano_atual;

    printf("Escreva o ano de matrícula na escola: \n");
    scanf("%i", &AA);

    printf("Qual série de ensino médio: \n");
    scanf("%i", &S);

    printf("Escreva o semestre: \n");
    scanf("%i", &D);

    printf("Escreva o ano atual: \n");
    scanf("%i", &DD);

    ano_matricula = AA - 2000;

    if (S == 1) {
        printf("1");
    } 
    if (S == 2) {
        printf("2");
    } else {
        printf("3");
    }

    if (D == 1) {
        printf("1");
    } else {
        printf("2");
    }

    ano_atual = DD - 2000;

    printf("O código de matrícula é: %02i%i%i%i \n \n", ano_matricula, S, D, ano_atual);

    return 0;
}*/

int main(){

    int matricula, ano, semestre;
    
    printf("Digite o número de matrícula (AASDDD): \n");
    scanf("%d", &matricula);
    
    // Extrai o ano dos dois primeiros dígitos (AA)
    ano = matricula / 1000;
    
    // Extrai o semestre (S)
    semestre = (matricula / 100) % 10;
    
    printf("Ano: 20%02d \n", ano); // Assume que o ano está no formato de dois dígitos
    printf("Semestre: %d \n \n", semestre);
    
    return 0;
}