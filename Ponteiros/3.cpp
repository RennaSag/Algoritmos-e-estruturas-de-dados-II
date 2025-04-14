#include <stdio.h>

struct Resultados {
    int fibonacci;
    int fatorial;
    int soma;
};


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}


int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

int main() {
    int n;
    struct Resultados resultados;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    resultados.fibonacci = fibonacci(n);
    resultados.fatorial = fatorial(n);
    resultados.soma = soma(n);

    printf("Fibonacci de %d: %d\n", n, resultados.fibonacci);
    printf("Fatorial de %d: %d\n", n, resultados.fatorial);
    printf("Soma dos numeros de 1 a %d: %d\n", n, resultados.soma);

    return 0;
}
