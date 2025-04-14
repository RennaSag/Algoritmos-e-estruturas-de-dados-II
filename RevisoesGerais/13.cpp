#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *trem;
	trem=fopen("arqv\\output.txt", "w");
	
	if(trem==NULL){
		printf("Erro na abertura do arquivo.");
		system("pause");
		exit(1);
	}
	
	
	char ngc[30];
	printf("Digita o ngc q c que: ");
	fgets(ngc, sizeof(ngc), stdin);
	
	if(fputs(ngc, trem) == EOF){				
		printf("\nErro na gravacao");			
	}
	else{
		printf("\nfoi se");
	}
	
	fclose(trem);
return 0;
}