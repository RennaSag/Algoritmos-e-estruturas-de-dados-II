#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    char sobrenome[50];
    int cpf;
    Data data_nascimento;
    Data data_admissao;
    float salario;
} Dados;

void mostrar_Dados(Dados informacoes) {
    printf("Nome: %s %s\n", informacoes.nome, informacoes.sobrenome);
    printf("CPF: %d\n", informacoes.cpf);
    printf("Data de nascimento: %02d/%02d/%04d\n", informacoes.data_nascimento.dia,
           informacoes.data_nascimento.mes, informacoes.data_nascimento.ano);
    printf("Data de admissao: %02d/%02d/%04d\n", informacoes.data_admissao.dia,
           informacoes.data_admissao.mes, informacoes.data_admissao.ano);
    printf("Salario: %.2f\n\n", informacoes.salario);
}

int main() {
    Dados funcionarios[2];

    //inserção de dados e informações
    for (int i = 0; i < 2; i++) {
        printf("Funcionario %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", funcionarios[i].nome);

        printf("Sobrenome: ");
        scanf("%s", funcionarios[i].sobrenome);

        printf("CPF: ");
        scanf("%d", &funcionarios[i].cpf);

        printf("Data de nascimento:\n");
        printf("Dia: ");
        scanf("%d", &funcionarios[i].data_nascimento.dia);

        printf("Mes: ");
        scanf("%d", &funcionarios[i].data_nascimento.mes);

        printf("Ano: ");
        scanf("%d", &funcionarios[i].data_nascimento.ano);

        printf("Data de admissao:\n");
        printf("Dia: ");
        scanf("%d", &funcionarios[i].data_admissao.dia);

        printf("Mes: ");
        scanf("%d", &funcionarios[i].data_admissao.mes);

        printf("Ano: ");
        scanf("%d", &funcionarios[i].data_admissao.ano);

        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);

        printf("\n");
        system("cls");
    }

    //mostrar dados a partir da função
    for (int i = 0; i < 2; i++) {
        printf("Detalhes do Funcionario %d:\n", i + 1);
        mostrar_Dados(funcionarios[i]);
    }

    return 0;
}
