//Escreva uma função recursiva para calcular a soma dos primeiros N números naturais

#include <stdio.h>

int som(int n){
	if(n==0 or n==1){
		return 1;
	}
	else{
		return n + som(n-1);
	}
}
int main(){
	
	int n;
	
	scanf("%d", &n);
	
	printf("%d", som(n));
	

}