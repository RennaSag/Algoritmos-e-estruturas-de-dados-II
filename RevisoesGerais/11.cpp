//Crie um programa que lê o conteúdo de um arquivo texto chamado "input.txt" e imprime seu conteúdo na tela

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *file;
	file=fopen("arqv\\input.txt", "r");
	
	if(file==NULL){
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	
	char *texto=fgets(texto, 40, file);
	if(texto==NULL){
		printf("Erro na leitura");
	}
	else{
		printf("%s", texto);	
	}
	
	fclose(file);
return 0;
}