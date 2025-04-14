#include <stdio.h>
#include <string.h>

void substituirZerosPorUns(char *str) {
    int comprimento = strlen(str);

    for (int i = 0; i < comprimento; i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    substituirZerosPorUns(string);

    printf("String com os '0's substituidos por '1's: %s\n", string);

    return 0;
}
