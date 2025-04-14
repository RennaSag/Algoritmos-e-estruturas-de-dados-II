#include <stdio.h>

int fatorial(int numero){
	if(numero==1){
		return 1;
	}
	else
		return numero*fatorial(numero-1);
}


int main(){
	
	int fat, n;
	
	scanf("%d", &n);
	
	fat=fatorial(n);
	
	printf("%d", fat);
	
return 0;
}