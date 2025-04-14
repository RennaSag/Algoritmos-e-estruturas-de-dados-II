/*Crie um programa que lê o conteúdo de um arquivo "dados.txt" e 
verifica se uma determinada palavra fornecida pelo usuário está presente no arquivo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *data;
	data=fopen("arqv\\dados.txt", "r");
	
	if(data==NULL){
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	
	
	char texto[30];
	
	printf("Digite oq quer verificar: ");
	fgets(texto, sizeof(texto), stdin);
	
	char *string=fgets(string, 30, data);
	
	if(string==NULL){
		printf("Erro na leitura");
	}
	else{	
		if(string==texto){
			printf("Strings iguais");
		}
		else{
			printf("Strings diferentes");
		}
	}
	
	//n consegui fazer

return 0;
}