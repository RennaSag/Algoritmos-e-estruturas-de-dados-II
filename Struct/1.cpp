#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int matricula;
    float notas[3]; 
    char curso[30];
    float media;
} Aluno;

float Media(float n1, float n2, float n3) { 
    float media = (n1 + n2 + n3) / 3.0; 
    return media;
}

int main() {
    Aluno alunos[6];
    
    float Maior_media = 0;
    float Menor_media = INT_MAX;
    int indice_maior = 0;
    int indice_menor = 0;

    for (int i = 0; i < 6; i++) { 
        printf("Aluno %d\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("\nNotas\n");

        for (int j = 0; j < 3; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        printf("Curso: ");
        scanf("%s", alunos[i].curso);
        
        system("cls"); 

        alunos[i].media = Media(alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        
        if (alunos[i].media > Maior_media) {
            Maior_media = alunos[i].media;
            indice_maior = i;
        }
        
        if (alunos[i].media < Menor_media) {
            Menor_media = alunos[i].media;
            indice_menor = i;
        }
    }
    
    printf("\nNotas e Medias de Todos os Alunos:\n");
    for (int i = 0; i < 6; i++) {
        printf("\nNome: %s\n", alunos[i].nome);
        printf("Media: %.2f\n", alunos[i].media);
        printf("Notas:\n");
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: %.2f\n", j + 1, alunos[i].notas[j]);
        }
    }
    
    
    printf("\nAluno com a Maior Media:\n");
    printf("Nome: %s\n", alunos[indice_maior].nome);
    printf("Media: %.2f\n", alunos[indice_maior].media);
    printf("Notas:\n");
    for (int j = 0; j < 3; j++) {
        printf("Nota %d: %.2f\n", j + 1, alunos[indice_maior].notas[j]);
    }
    
    printf("\nAluno com a Menor Media:\n");
    printf("Nome: %s\n", alunos[indice_menor].nome);
    printf("Media: %.2f\n", alunos[indice_menor].media);
    printf("Notas:\n");
    for (int j = 0; j < 3; j++) {
        printf("Nota %d: %.2f\n", j + 1, alunos[indice_menor].notas[j]);
    }
      
    return 0;
}
