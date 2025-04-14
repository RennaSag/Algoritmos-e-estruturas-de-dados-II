#include <stdio.h>

void exibe_serie(int i, int j, int k){
	if (i <= j) {
    	printf("%d ", i);
        exibe_serie(i+k,j,k);      
    }	
}

int main(){
	int i=2;
	int j=80;
	int k=6;
	
	exibe_serie(i,j,k);
	
return 0;	
}