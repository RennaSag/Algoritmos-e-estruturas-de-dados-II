#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade_estudantes;
    float *notas;
    float soma = 0;
    float media;

    printf("Digite a quantidade de estudantes na turma: ");
    scanf("%d", &quantidade_estudantes);

    if (quantidade_estudantes <= 0) {
        printf("A quantidade de estudantes deve ser um número positivo.\n");
        return 1;
    }

    notas = (float *)malloc(quantidade_estudantes * sizeof(float));

    if (notas == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < quantidade_estudantes; i++) {
        printf("Digite a nota do estudante %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / quantidade_estudantes;

    printf("A média aritmética das notas é: %.2f\n", media);

    free(notas);

    return 0;
}
