#include <stdio.h>

/*
33. O sistema de avaliação de determinada disciplina, é composto por três provas. A
primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Faça
um algoritmo para calcular a média final de um aluno desta disciplina.
*/

int main(){

    float nota1, nota2, nota3, media, prova1, prova2, prova3;

    printf("Insira a nota da primeira prova: \n");
    scanf("%f", &nota1);

    printf("Insira a nota da segunda prova: \n");
    scanf("%f", &nota2);

    printf("Insira a nota da terceira prova: \n");
    scanf("%f", &nota3);

    prova1 = nota1 * 2;
    prova2 = nota2 * 3;
    prova3 = nota3 * 5;

    media = (prova1 + prova2 + prova3) / 10;

    if (media < 6){
        printf("Reprovado no semestre !!! \n \n");
    }
    if (media <= 7){
        printf("Tá na média do semestre !!! \n \n");
    }
    if (media >= 10){
        printf("Aprovado no semestre !!! \n \n");
    }
    if (media > 12){
        printf("Parabéns, notão ein !!! \n \n");
    }

    printf("Sua nota é: %.2f \n \n", media);

    return 0;
}