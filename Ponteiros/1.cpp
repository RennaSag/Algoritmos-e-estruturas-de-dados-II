#include <stdio.h>

int verificar(char palavra[], int inicio, int fim){
	if(inicio>=fim){
		return 1;
	}
	if(palavra[inicio]!=palavra[fim]){
		return 0;
	}
	
	return verificar(palavra, inicio+1, fim-1);
}

int main(){
	
	int tamanho;
	char palavra[10];
	
	printf("Digite a palavra: ");
	scanf("%s", palavra);
	
	
	while(palavra[tamanho]!='\0'){
		tamanho++;
	}
	
	if(verificar(palavra, 0, tamanho-1)){
		printf("palindromo");
	}
	else{
		printf("nao palindromo");
	}
	
	
	
	
return 0;
}