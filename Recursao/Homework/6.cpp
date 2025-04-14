#include <stdio.h>

int mult_rec(int n1, int n2) {
	if (n2 == 0) {
        return 0;
    } 
	else{
		return n1+mult_rec(n1, n2 - 1);
	}
}

int main() {
    int n1, n2, final;
    
    scanf("%d%d", &n1,&n2);
    
    final =mult_rec(n1,n2);
    
    printf("%d", final);
return 0;
}
