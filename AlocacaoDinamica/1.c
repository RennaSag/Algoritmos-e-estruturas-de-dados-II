#include <stdio.h>
#include <stdlib.h>

int main(){

    int *n;
    n=malloc(5*sizeof(int));

    for(int i=0; i<5; i++){
        scanf("%d", &n[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d ", n[i]);
    }

    free(n);

return 0;
}
