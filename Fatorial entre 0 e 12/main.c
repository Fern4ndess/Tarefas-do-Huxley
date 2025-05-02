#include <stdio.h>
#include <math.h>

int fatorial( int n ) {
    if ( n == 0 || n == 1 ) {
        return 1; 
    } else {
        return n * fatorial(n - 1); 
    }
}

void fatorar() {
    int n;
    scanf("%d", &n);
    
    if( n == -1) {
        return;
    }
    
    if(0 <= n && n <= 12) {
        printf("%d\n", fatorial(n));
    }
    
    fatorar();
}

int main() {
    fatorar();
    return 0;
}