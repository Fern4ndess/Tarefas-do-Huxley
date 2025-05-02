#include <stdio.h>
#include <math.h>

int primo( int x ) {
    if (x <= 1) {
        return 0;
    }
    if (x == 2 || x == 3 || x == 5 || x == 7) {
        return 1;
    }
    if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

int prox_primo ( int y ) {
    
}

int fatorial( int z ) {
    if (z == 0 || z == 1 ) {
        return 1; 
    } 
    else {
        return z * fatorial(z - 1); 
    }
}


void calculo(int n) {
    int numerador;
    int denominador;
    
    if (n == 0) {
        return;
    }
    
    printf("%d!/%d ", );
    printf("+ ", );
}


int main() {
    int n;
    
    scanf("%d", &n);
    
    calculo(n);

    return 0;
}
