#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char caractereProcurado;
    char caractere;
    int contOcorrencias = 0;

    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nomeArquivo);

    printf("Digite o caractere a ser procurado: ");
    scanf(" %c", &caractereProcurado);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == caractereProcurado) {
            contOcorrencias++;
        }
    }

    fclose(arquivo);

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", caractereProcurado, contOcorrencias);

    return 0;
}
