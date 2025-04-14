#include <stdio.h>

void zero_n(int N, int posicao) {
	if(posicao <= N){
		printf("%d, ", posicao);
		zero_n(N, posicao+1);
	}
}

int main() {
    int n;
    scanf("%d", &n);  
    zero_n(n, 0);


return 0;
}
