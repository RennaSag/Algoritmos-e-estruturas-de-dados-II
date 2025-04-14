/*Crie um algoritmo que peça ao usuário que insira as dimensões de 
uma matriz (linhas e colunas). Em seguida, aloque dinamicamente memória para 
uma matriz e preencha-a com valores fornecidos pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int qtdlinha, qtdcoluna;
	
	printf("Digite as linhas e colunas, respectivamente: ");
	scanf("%d%d", &qtdlinha, &qtdcoluna);
	
	
	int **matriz = (int **)malloc(qtdlinha * sizeof(int *));
    for (int i = 0; i < qtdlinha; i++) {
        matriz[i] = (int *)malloc(qtdcoluna * sizeof(int));
    }
	
	
	for(int i=0; i<qtdlinha; i++){
		for(int j=0; j<qtdcoluna; j++){
			printf("Digite o valor para o elemento m[%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}		
	}
	
	
	printf("\nMatriz:\n");
    for (int i = 0; i < qtdlinha; i++) {
        for (int j = 0; j < qtdcoluna; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
	
	
	
	for (int i = 0; i < qtdlinha; i++) {
        free(matriz[i]);
    }
    free(matriz);
	
return 0;
}