#include <stdio.h>

int calculo(int numero){
	if(numero==1){
		return 1;
	}
	else{
		return numero+calculo(numero-1);
	}
}


int main(){
	
	int soma, n;
	
	scanf("%d", &n);
	
	soma=calculo(n);
	
	printf("%d", soma);	
	
	
	
	
return 0;
}