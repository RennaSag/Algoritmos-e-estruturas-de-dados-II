#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[30];
	int telefone, idade;
}Pessoa;

void fmostrar(int qtd, Pessoa *pes, FILE *dt){
	for(int j=0; j<qtd; j++){
		printf("\nUsurario %d\n", j+1);
		printf("Nome: %s", pes[j].nome);
		printf("Telefone: %d\n", pes[j].telefone);
		printf("Idade: %d\n\n", pes[j].idade);
	}
}

void fidade(Pessoa *id, int qtdpes, int i){
	if(i<qtdpes){		
		printf("Idade do usuario %d: %d\n", i + 1, id[i].idade);
		fidade(id,qtdpes, i+1);	
	}
}


int main(){
	
	FILE *data;
	data=fopen("arqv\\cadastro.txt", "wb");
	
	if(data==NULL){
		printf("Erro na abertura.\n");
		system("pause");
		exit(1);
	}
	
	int qtdpessoas;
	printf("Insira quantas pessoas serao cadastradas: ");
	scanf("%d", &qtdpessoas);
	
	
	Pessoa *userdata=(Pessoa *) malloc(qtdpessoas*sizeof(Pessoa));

	
	for(int i=0; i<qtdpessoas; i++){
		getchar();//ngc pra limpar o buffer do teclado
		
		printf("\nUsuario %d\n", i+1);
		
		printf("Nome: ");
		fgets(userdata[i].nome, sizeof(userdata[i].nome), stdin);
		printf("Telefone: ");
		scanf("%d", &userdata[i].telefone);	
		printf("Idade: ");
		scanf("%d", &userdata[i].idade);		
		
		fwrite(&userdata, sizeof(Pessoa), 1, data);	
	}
	
	rewind(data); //tbm n sei pra q serve isso:  "Reposicionar o ponteiro de arquivo para o início para a leitura

	fmostrar(qtdpessoas, userdata, data);
	fidade(userdata, qtdpessoas, 0);


	fclose(data);
	free(userdata);
return 0;
}