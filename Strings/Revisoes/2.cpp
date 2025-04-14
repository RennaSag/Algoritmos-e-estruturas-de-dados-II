#include <stdio.h>

void imprimirReverso(char palavra[], int tamanho) {
    if (tamanho == 0) {
        return;
    }

    printf("%c", palavra[tamanho - 1]);

    imprimirReverso(palavra, tamanho - 1);
}

int main() {
    char palavra[30]; 

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    printf("Palavra de tras para frente: ");
    imprimirReverso(palavra, tamanho);
    printf("\n");

    return 0;
}
