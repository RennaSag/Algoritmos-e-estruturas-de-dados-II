//Escreva um programa que conta e imprime o número de linhas em um arquivo texto chamado "dados.txt"

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *aqui;
	
	aqui=fopen("arqv\\dados.txt", "r");
	if(aqui==NULL){
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	char string[40];
	int n=0;	
	while(fgets(string, sizeof(string), aqui) != NULL){
		n++;
	}
	
	
	printf("Quantidade de linhas: %d", n);
	
	fclose(aqui);
return 0;
}