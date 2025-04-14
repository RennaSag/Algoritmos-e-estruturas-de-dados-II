#include <stdio.h>
#include <ctype.h>

void converter_para_maiuscula(const char *entrada, const char *saida) {
    FILE *arquivo_entrada = fopen(entrada, "r");
    FILE *arquivo_saida = fopen(saida, "w");

    if (arquivo_entrada == NULL || arquivo_saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    int caractere;
    while ((caractere = fgetc(arquivo_entrada)) != EOF) {
        fputc(toupper(caractere), arquivo_saida);
    }

    fclose(arquivo_entrada);
    fclose(arquivo_saida);
}

int main() {
    char nome_arquivo_entrada[100];
    char nome_arquivo_saida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arquivo_entrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arquivo_saida);

    converter_para_maiuscula(nome_arquivo_entrada, nome_arquivo_saida);

    printf("Conteúdo convertido para maiúsculas com sucesso.\n");

    return 0;
}
