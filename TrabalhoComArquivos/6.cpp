#include <stdio.h>
#include <ctype.h>

void contar_letras_arquivo(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int contagem_letras[26] = {0};

    int caractere;
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isalpha(caractere)) {
            caractere = tolower(caractere);
            contagem_letras[caractere - 'a']++;
        }
    }

    fclose(arquivo);

    for (int i = 0; i < 26; i++) {
        if (contagem_letras[i] > 0) {
            printf("A letra '%c' aparece %d vezes.\n", 'a' + i, contagem_letras[i]);
        }
    }
}

int main() {
    char nome_arquivo[100];

    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nome_arquivo);

    contar_letras_arquivo(nome_arquivo);

    return 0;
}
