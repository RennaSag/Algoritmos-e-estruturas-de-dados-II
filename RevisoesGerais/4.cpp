//Escreva uma função recursiva para calcular a potência de um número.
#include <stdio.h>

int pot(int base, int expoente){
	if(expoente==0){
		return 1;
	}
	else{
		return base*pot(base, expoente-1);
	}
}

int main(){
	 int b, e;
	 
	 printf("Digita a baze i o esponte");
	 scanf("%d%d", &b,&e);
	 
	 printf("deu nisso %d", pot(b, e));
	
	
return 0;
}