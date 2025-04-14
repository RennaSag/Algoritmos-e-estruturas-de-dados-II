#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char caractere;
    int numLinhas = 0;

    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            numLinhas++;
        }
    }

    fclose(arquivo);

    printf("O arquivo possui %d linhas.\n", numLinhas);

    return 0;
}
