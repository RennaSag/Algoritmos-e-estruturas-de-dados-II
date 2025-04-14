#include <stdio.h>
#include <ctype.h>

void substituir_vogais(const char *entrada, const char *saida) {
    FILE *arquivo_entrada = fopen(entrada, "r");
    FILE *arquivo_saida = fopen(saida, "w");

    if (arquivo_entrada == NULL || arquivo_saida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    int caractere;
    while ((caractere = fgetc(arquivo_entrada)) != EOF) {
        if (isalpha(caractere)) {
            char letra = tolower(caractere);
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                fputc('*', arquivo_saida);
            } else {
                fputc(caractere, arquivo_saida);
            }
        } else {
            fputc(caractere, arquivo_saida);
        }
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

    substituir_vogais(nome_arquivo_entrada, nome_arquivo_saida);

    printf("Vogais substituídas com sucesso.\n");

    return 0;
}
