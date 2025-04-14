#include <stdio.h>
#include <stdlib.h>

int main(){

    int *n;
    int i;


    scanf("%d", &i);
    n=malloc(i*sizeof(int));

    printf("\n");
    for(int j=0; j<i; j++){
        scanf("%d", &n[j]);
    }

    for(int j=0; j<i; j++){
        printf("%d ", n[j]);
    }

    free(n);


return 0;
}
