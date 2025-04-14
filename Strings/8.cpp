#include <stdio.h>

int countOnes(const char *str) {
    int count = 0; 

    while (*str != '\0') {
        if (*str == '1') {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char string[100];

    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", string);

    int onesCount = countOnes(string);

    printf("Numero de digitos '1' na string: %d\n", onesCount);

    return 0;
}
