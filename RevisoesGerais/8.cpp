
#include <stdio.h>
#include "somarvetor.h"
/*
int func(int *vet, int tamanho){
	int somador;
	
	for(int i=0; i<tamanho; i++){
		somador=vet[i]+somador;
	}
	
	return somador;
}*/


int main(){
	
	int x;
	printf("Digite o tamando do vetor: ");
	scanf("%d", &x);
	
	int vetor[x];
	
	for(int i=0; i<x; i++){
		printf("Digite o valor do elemento %d: ",i+1);
		scanf("%d", &vetor[i]);
	}
	
	int resultado=func(vetor, x);
	printf("Resultado: %d", resultado);
	
return 0;
}