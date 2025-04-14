#include <stdio.h>

int menor_vetor(int vetor[], int tamanho, int indice){
	int menor=0;
	if(vetor[indice]<vetor[indice+1]){
		menor=vetor[indice];
	}
	else{
		menor_vetor(vetor, tamanho, indice+1);
	}
	printf("%d", menor);
}

int main(){
	
	int vet[5]={2, 3, 4, 5, 6};
	int tamanho = sizeof(vet) / sizeof(vet[0]);
	menor_vetor(vet, tamanho, 0);
	
	
return 0;	
}