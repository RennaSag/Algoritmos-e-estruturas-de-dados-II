#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    int comprimento = strlen(string);

    printf("String sem vogais: ");
    for (int i = 0; i < comprimento; i++) {
        char caractere = tolower(string[i]); 
        if (caractere != 'a' && caractere != 'e' && caractere != 'i' && caractere != 'o' && caractere != 'u') {
            printf("%c", string[i]);
        }
    }

    printf("\n");

    return 0;
}
