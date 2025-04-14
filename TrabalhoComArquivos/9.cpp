#include <stdio.h>

void juntar_arquivos(const char *arquivo1, const char *arquivo2, const char *arquivo_saida) {
    FILE *arq1 = fopen(arquivo1, "r");
    FILE *arq2 = fopen(arquivo2, "r");
    FILE *saida = fopen(arquivo_saida, "w");

    if (arq1 == NULL || arq2 == NULL || saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    int caractere;

    while ((caractere = fgetc(arq1)) != EOF) {
        fputc(caractere, saida);
    }

    fputc('\n', saida);

    while ((caractere = fgetc(arq2)) != EOF) {
        fputc(caractere, saida);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(saida);
}

int main() {
    char nome_arquivo1[100];
    char nome_arquivo2[100];
    char nome_arquivo_saida[100];

    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nome_arquivo1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nome_arquivo2);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arquivo_saida);

    juntar_arquivos(nome_arquivo1, nome_arquivo2, nome_arquivo_saida);

    printf("Arquivos combinados com sucesso.\n");

    return 0;
}
