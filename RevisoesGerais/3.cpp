//Escreva uma função recursiva para calcular o n-ésimo termo da sequência de Fibonacci.

#include <stdio.h>

int fib(int n){
	if(n==0 or n==1){
		return 1;
	}
	else{
		return fib(n-2)+fib(n-1);
	}

//1,1,2,3,5,8,13,21...
}

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	printf("%d", fib(n));
	
	
return 0;
}