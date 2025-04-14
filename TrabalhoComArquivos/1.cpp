#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao criar/abrir o arquivo.\n");
        return 1;
    }

    printf("Digite caracteres para serem gravados no arquivo. Digite '0' para encerrar:\n");

    do {
        scanf(" %c", &caractere);

        if (caractere != '0') {
            fputc(caractere, arquivo);
        }

    } while (caractere != '0');

    fclose(arquivo);

    arquivo = fopen("arq.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("\nConteúdo do arquivo:\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }

    fclose(arquivo);

    return 0;
}
