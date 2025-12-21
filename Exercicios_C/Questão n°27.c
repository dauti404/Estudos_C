#include <stdio.h>

/*
27. Leia um código de cinco algarismos (variável Codigo) e gere o digito verificador
(DigitoV) módulo 7 para o mesmo.
Supondo que os cinco algarismos do código são ABCDE, uma forma de calcular
o dígito desejado, com módulo 7 é:
DigitoV = resto da divisão de S por 7, onde
S = 6*A + 5*B + 4*C + 3*D + 2*E
*/

int main(){

    int a, b, c, d, e, digitoV, S;

    printf("Digites os valores de A, B, C, D e E: \n");
    scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);

    S = 6 * a + 5 * b + 4 * c + 3 * d + 2 * e;

    digitoV = S % 7;

    printf("O resultado de S é: %i \n", S);
    printf("O resto da divisão por 7 é: %i \n \n", digitoV);

    return 0;
}