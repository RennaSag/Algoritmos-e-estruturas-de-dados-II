#include <stdio.h>

void exibir_vetor(int vetor[], int tamanho, int indice){
	if(tamanho == indice){
		return;
	}
	printf("%d ", vetor[indice]);
	
	exibir_vetor(vetor, tamanho, indice+1);
}


int main(){
	int vet[5]={0,1,2,3,4};
	int tamanho = sizeof(vet) / sizeof(vet[0]);
	
	exibir_vetor(vet, tamanho, 0);
	
return 0;
}
