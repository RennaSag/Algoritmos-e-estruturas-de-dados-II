#include <stdio.h>
#include <stdlib.h>


void lerVetor(int *vetor, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int n;
    int *vetor;

    printf("Digite o valor de n (tamanho do vetor): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O tamanho do vetor deve ser um número positivo.\n");
        return 1;
    }

    
    vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

   
    lerVetor(vetor, n);

    
    printf("Elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

   
    free(vetor);

    return 0;
}
