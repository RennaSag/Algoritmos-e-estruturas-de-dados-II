#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *data1, *data2;
	
	data1=fopen("arqv\\origem.txt", "r");
	if(data1==NULL){
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	
	data2=fopen("arqv\\destino.txt", "w");	
	if(data2==NULL){
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	
	//
	char texto[50];
	fgets(texto, sizeof(texto), data1);		
	fputs(texto, data2);


	fclose(data1);
	fclose(data2);

return 0;
}