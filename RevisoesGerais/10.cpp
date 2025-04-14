#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *func(const char *text){
    char *texto2 = (char *)malloc((strlen(text) + 1) * sizeof(char));
   
    if (texto2 == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }

    strcpy(texto2, text);
    
    printf("%s", texto2);
    free(texto2);

    return texto2;
}

int main(){
    FILE *dt;
    dt = fopen("arqv\\arquivo.txt", "r");

    if (dt == NULL){
        printf("Erro na abertura do arquivo.\n");
        system("pause");
        exit(1);
    }

    char texto[30];
    fgets(texto, 30, dt);
    func(texto);
    
    fclose(dt);
return 0;
}
