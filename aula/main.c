#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    int dia, mes, ano;
} data;

typedef struct endereco {
    char logradouro[101], cidade[101], estado[3];
} endereco;

typedef struct pessoa {
    int idade, pontos;
    data data_nascimento;
    endereco endereco;
    char cpf[14], nome[14];
} pessoa;

int main() {
    pessoa cliente;
    FILE * ponteiro_arquivo = fopen("clientes.csv", "w");

    if (ponteiro_arquivo == NULL) {
        printf("Nao foi possivel abrir o arquivo ou ele nao existe."); 
        printf("O programa sera encerrado...");
        exit(0);
    }

    printf("Arquivo aberto com sucesso!\n");
    fprintf(ponteiro_arquivo, "cpf, nome, data_nascimento, idade, endereco, pontos\n");
    printf("Informe o CPF: ");
    scanf("%s", cliente.cpf);
    printf("Informe o nome: ");
    scanf("%s", cliente.nome);
    printf("\t\tBem-vindo, %s!\nInforme a data de nascimento no formato dd mm aaaa (separe os campos com espaços): ", cliente.nome);
    scanf("%2d %2d %4d", &cliente.data_nascimento.dia, &cliente.data_nascimento.mes, &cliente.data_nascimento.ano);
    // Limpar o buffer de entrada
    while (getchar() != '\n');

    printf("Informe a idade: ");
    scanf("%d", &cliente.idade);
    while (getchar() != '\n');
    printf("Informe o logradouro: ");
    fgets(cliente.endereco.logradouro, 101, stdin);
    while (getchar() != '\n');
    printf("Informe a cidade: ");
    fgets(cliente.endereco.cidade, 101, stdin);
    while (getchar() != '\n');
    printf("Informe o estado: ");
    fgets(cliente.endereco.estado, 3, stdin);

    cliente.pontos = 0;

    fprintf(ponteiro_arquivo, "%s, %s, %02d/%02d/%04d, %d, %s %s %s, %d\n", cliente.cpf, cliente.nome, cliente.data_nascimento.dia, cliente.data_nascimento.mes, cliente.data_nascimento.ano, cliente.idade, cliente.endereco.logradouro, cliente.endereco.cidade, cliente.endereco.estado, cliente.pontos);
    printf("Os dados do cliente foram cadastrados com sucesso.");
    fclose(ponteiro_arquivo);
    return 0;
}
