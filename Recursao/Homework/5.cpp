#include <stdio.h>

int n_esimo(int n) {
    if (n == 0) {
        return 0;
    } 
	else if (n == 1) {
        return 1;
    } 
	else {
        return n_esimo(n - 2) + n_esimo(n - 1);
    }
}

int main() {
    int num, final;
    
    scanf("%d", &num);
    
    final = n_esimo(num);
    
    printf("%d", final);
return 0;
}
