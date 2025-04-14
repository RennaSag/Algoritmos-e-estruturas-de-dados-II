#include <stdio.h>
#include <ctype.h>  

int main() {
    char nome[100];  

    printf("Digite um nome: ");
    scanf("%s", nome);  

    
    char primeiraLetra = tolower(nome[0]);

    if (primeiraLetra == 'a') {
        printf("O nome eh: %s\n", nome);
    } else {
        printf("A primeira letra do nome não eh 'a'.\n");
    }

    return 0;
}
