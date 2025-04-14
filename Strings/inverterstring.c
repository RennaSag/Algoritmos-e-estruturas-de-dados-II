//inverter uma string



#include <stdio.h>

#include <string.h>





int main(){



	char string[10]="renna";

	char string2[10];


	int i, j=0;


	for(i=strlen(string)-1; i>=0; i--){ //usado strlen -1 para ler o tamanho da string e subtrair 1, pois o numero de termos começa por 1,2,3... e o tamanho da string começa por 0,1,2,3...

		string2[j]=string[i];	

		j++;


	}

	string2[j]='\0'; //encerramento no termo final (j) da string

	printf("%s", sttring2);


return 0;

}