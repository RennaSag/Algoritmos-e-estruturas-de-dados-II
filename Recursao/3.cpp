#include <stdio.h>
#include <math.h>

int potencia(int base){
	int result;
	
	if(base==1){
		return 1;
	}
	else{ 
		result=pow(base, 3)+potencia(base-1);
		return result;
	}
}

int main(){
	int n, soma_potencia;
	
	scanf("%d", &n);
	
	soma_potencia=potencia(n);
	
	printf("%d", soma_potencia);
	
	
return 0;
}