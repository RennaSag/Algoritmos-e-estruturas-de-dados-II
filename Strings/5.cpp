#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];  
    int comprimento; 

    printf("Digite um nome: ");
    scanf("%s", nome);  

    comprimento = strlen(nome); 

    printf("O nome '%s' tem %d letras.\n", nome, comprimento);

    return 0;
}
