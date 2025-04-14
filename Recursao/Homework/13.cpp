#include <stdio.h>

int soma_serie(int i, int j, int k){
	if (i > j) {
        return 0;
    }
	else {
        return i+soma_serie(i+k,j,k);
    }
	
	
}

int main(){
	int i=2;
	int j=80;
	int k=6;
	
	printf("%d",soma_serie(i,j,k));
	
return 0;	
}