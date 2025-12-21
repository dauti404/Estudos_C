#include <stdio.h>

/*
35. Considere que o último concurso vestibular apresentou três provas: Português,
Matemática e Conhecimentos Gerais. Considerando que para cada candidato
tem-se um registro contendo o seu nome e as notas obtidas em cada uma das
provas, construa um algoritmo que forneça:

a) o nome e as notas em cada prova do candidato

b) a média do candidato

c) uma informação dizendo se o candidato foi aprovado ou não. Considere que
um candidato é aprovado se sua média for maior que 7.0 e se não apresentou
nenhuma nota abaixo de 5.0
*/

#define max 100

int main(){

    char nome[max];
    char sobrenome[max];

    float port, mat, con_gerais, nota, media_port, media_mat, media_con_gerais;

    printf("Escreva o seu nome: \n");
    scanf("%s", &nome);

    printf("Escreva o seu sobrenome: \n");
    scanf("%s", &sobrenome);

    printf("Escreva sua nota em Português: \n");
    scanf("%f", &port);

    printf("Escreva sua nota em Matemática: \n");
    scanf("%f", &mat);

    printf("Escreva sua nota em Conhecimentos Gerais: \n");
    scanf("%f", &con_gerais);
    printf("\n");

    media_port = (port * 3) / 2;
    media_mat = (mat * 5) / 3;
    media_con_gerais = (con_gerais * 4) / 2;

    nota = media_port + media_mat + media_con_gerais;

    printf("Média em Português: %.2f \n", media_port);
    if (media_port <= 5) {
        printf("Reprovado \n");
    } 
    if (media_port > 5 && media_port < 8){
        printf("Reavaliação \n");
    }
    if (media_port >= 8) {
        printf("Aprovado \n");
    }
    printf("\n");

    printf("Média em Matemática: %.2f \n", media_mat);
    if (media_mat <= 5) {
        printf("Reprovado \n");
    }   
    if (media_mat > 5 && media_mat < 8){
        printf("Reavaliação \n");
    }
    if (media_mat >= 8) {
        printf("Aprovado \n");
    }
    printf("\n");

    printf("Média em Conhecimentos Gerais: %.2f \n", media_con_gerais);
    if (media_con_gerais <= 5) {
        printf("Reprovado \n");
    } 
    if (media_con_gerais > 5 && media_con_gerais < 8){
        printf("Reavaliação \n");
    }
    if (media_con_gerais >= 8) {
        printf("Aprovado \n");
    }
    printf("\n");

    printf("    Situação Geral: \n \n");
    printf("Nome do canditado: %s %s \n", nome, sobrenome);
    printf("Média em Português: %.2f \n", media_port);
    printf("Média em Matemática: %.2f \n", media_mat);
    printf("Média em Conhecimentos Gerais: %.2f \n \n", media_con_gerais);

    printf("Média Geral: %.2f \n", nota);
    if (nota <= 15) {
        printf("Reprovado do concurso \n");
    } 
    if (nota > 15 && nota < 20){
        printf("Cadastro Reserva \n");
    }
    if (nota >= 25) {
        printf("Aprovado no concurso \n");
    }
    printf("\n");
    

   

    return 0;
}