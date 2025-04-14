#include <stdio.h>

int fatorialDuplo(int N) {
    if (N == 1) {
        return 1;
    } else {
        return N * fatorialDuplo(N - 2);
    }
}

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0 || N <= 0) {
        printf("O número fornecido não é ímpar ou positivo.\n");
    } else {
        int resultado = fatorialDuplo(N);
        printf("O fatorial duplo de %d é: %d\n", N, resultado);
    }

    return 0;
}
