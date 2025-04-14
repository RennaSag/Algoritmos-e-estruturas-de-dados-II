//Escreva uma função recursiva para calcular o fatorial de um número.

#include <stdio.h>

int fat(int n){
	if(n==0 or n==1){
		return 1;
	}
	else{
		return n * fat(n-1);
	}
}
int main(){
	
	int n;
	
	scanf("%d", &n);
	
	printf("%d", fat(n));
	

}