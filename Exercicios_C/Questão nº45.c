#include <stdio.h>

/*
45. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo,
o tipo de operação a ser realizada (depósito ou retirada) e o valor da operação.
Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser
mostrada, também, a mensagem “conta estourada”.
*/

// Protótipo
void conti();

int main() {

    // Variáveis
    float saldo, valor_deposito, valor_saldo, valor_retirada, retirada;
    int num_conta, tipo_operacao;

    // Arquivo
    FILE *arquivo;

    // Abre o arquivo para adição de dados ---> "a"
    arquivo = fopen("dados_banco.txt", "a");

    // Verifica se o arquivo foi aberto
    if ( arquivo == NULL) {
        printf("\nOcorre uma falha!\n");
        return 1;
    }

    // Menu inicial
    printf("Banco Exemplo \n");
    printf("Número da conta: \n");
    scanf("%i", &num_conta);

    // Menu do usuário
    printf("\nQual operação deseja realizar: \n");
    printf("Ver saldo    ---> Digite 1 \n");
    printf("Depósito     ---> Digite 2 \n");
    printf("Retirada     ---> Digite 3 \n");
    printf("Apagar dados ---> Digite 4 \n");
    scanf("%i", &tipo_operacao);

    // Estrutura das operações do banco
    switch (tipo_operacao)
    {
    // Ver saldo
    case 1:
        // Abre o arquivo para leitura
        arquivo = fopen("dados_banco.txt", "r");

        // Armazena o saldo na memória
        while (fscanf(arquivo, "%f", &saldo) != EOF){
        printf("\nSaldo do cliente: \n");
        printf("R$ %.2f", saldo);
        }

        // Fecha o arquivo
        fclose(arquivo);
        break;
    // Depositar
    case 2: 
        // Abre o arquivo para adição
        arquivo = fopen("dados_banco.txt", "a");

        // Menu para o usuário
        printf("Quanto deseja depositar: \n");
        scanf("%f", &valor_deposito);

        // Escreve no arquivo
        fprintf(arquivo, "%f", valor_deposito);

        // fecha o arquivo 
        fclose(arquivo);

        printf("Depósito realizado com sucesso!\n");
        break;
    // Retirada de saldo
    case 3:
        // Abre o arquivo
        arquivo = fopen("dados_banco.txt", "r");

        // Lê o arquivo para vê o saldo
        fscanf(arquivo, "%f", &valor_saldo);

        // Fecha o arquivo
        fclose(arquivo);

        // Menu
        printf("Quanto deseja retirar: \n");
        scanf("%f", &valor_retirada);

        // faz a retirada
        retirada = valor_saldo - valor_retirada;

        arquivo = fopen("dados_banco.txt", "w");

        if (arquivo == NULL) {
            printf("\nErro ao abrir o arquvo!\n");
            return 1;
        }

        // Escrevendo o resultado da operação no arquivo
        fprintf(arquivo, "%f", retirada);

        fclose(arquivo);
        break;
    // Apagar dados
    case 4:
        // Abre o arquivo
        arquivo = fopen("dados_banco.txt", "w");

        // Fecha o arquivo e apaga os dados
        fclose(arquivo);

        printf("Dados foram apagados! \n");
        break;
    default:
        break;
    }

    // Painel final do usuário
    printf("\n\nNúmero da conta:  Nº %i \n", num_conta);
    printf("Saldo:               R$ %.2f \n", saldo);
    printf("Depósito:            R$ %.2f \n", valor_deposito);
    printf("Retirada             R$ %.2f \n", valor_retirada);

    // Função de continuidade
    conti();

    return 0;
}


// Função de continuidade
void conti() {

    // Variáveis
    char resposta;

    // Loop
    do
    {
        printf("\nDeseja continuar? S/N \n");
        scanf("%c", &resposta);

        if (resposta == 'S' || resposta == 's') {
            main();
        }
        if (resposta == 'N' || resposta == 'n') {
            break;
        }
    } while (1);
    
}