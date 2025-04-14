#include <stdio.h>

double calcularSerie(int n) {
    if (n == 1) {
        return 1;
    } else {
        
        double termoAtual = 1.0 / (double)(n * n); 
        return termoAtual + calcularSerie(n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    double resultado = 2.0 + calcularSerie(n);

    printf("%d %.6lf\n", n, resultado);

    return 0;
}
