#include <stdio.h>

double serieHarmonica(int n) {
    if (n == 1) {
        return 1.0; // Caso base: 1/1 = 1
    } else {
        return 1.0 / n + serieHarmonica(n - 1);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    double resultado = serieHarmonica(n);

    printf("A serie harmonica ate 1/%d e: %lf\n", n, resultado);

    return 0;
}
