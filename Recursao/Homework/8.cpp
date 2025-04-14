#include <stdio.h>

void zero_n(int N) {
	if(N>=0){
		printf("%d, ", N);
		zero_n(N-1);
		
	}
	
}

int main() {
    int n;
    scanf("%d", &n);  
    
    zero_n(n);


return 0;
}
