#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculadora( int N , float X ) {
    
    if (N == 0) {
        printf("Valor final: %.2f\n", X);
        return;
    }
    
    char O;
    float aux;
    
    scanf("%c %f", &O , &aux);
    
    if ( O == 'A' || O == 'a' ) {
        return calculadora( N - 1 , X + aux);
    }
    
    else if ( O == 'S' || O == 's') {
        return calculadora( N - 1 , X - aux);
    }
    
    else if ( O == 'M' || O == 'm') {
        return calculadora( N - 1 , X * aux);
    }
    
    else if ( O == 'D' || O == 'd') {
        return calculadora( N - 1 , X / aux);
    }
    
    else if ( O == 'C' || O == 'c') {
        return calculadora( N - 1 , X = aux);
    }
    
    return calculadora( N - 1 , X );
}

int main() {
    int N;
    float X;
    
    scanf("%d %f", &N , &X);
    
    calculadora( N , X );
    
    return 0;
}
