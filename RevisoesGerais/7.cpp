#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que deve solicitar 
ao usuário que insira um número inteiro N. 
Em seguida, aloque dinamicamente um array de 
inteiros de tamanho N e preencha-o com valores fornecidos pelo usuário.*/

int main(){
	
	int n;
	
	printf("Digite o tamando: ");
	scanf("%d", &n);
	
	int *vet=(int *)malloc(n*sizeof(int));
	
	for(int i=0; i<n; i++){
		printf("Insira o elemento %d: ",i+1);
		scanf("%d", &vet[i]);
	}
	
return 0;
}