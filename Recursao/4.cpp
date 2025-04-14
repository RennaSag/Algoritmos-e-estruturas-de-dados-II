#include <stdio.h>
#include <math.h>

int potencia_base(int base, int expoente){
	if(expoente==0 and base!=0){
		return 1;
	}
	else if(base==0 && expoente==0){
		printf("Indefinido");
		return 0;
	}
	else{
		return pow(base, expoente);
	}
}

int main(){
	int b, ex, pot;
	
	scanf("%d%d", &b, &ex);
	
	pot=potencia_base(b, ex);
	
	printf("%d", pot);
	
	
}