#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculadora( int N , float X ) {
    char O;
    float aux;
    
    if (N == 0) {
        printf("Valor final: %.2f\n", X);
        return;
    }
    
    scanf("%c %f", &O , &aux);
    
    if ( O == 'A' ) {
        X += aux;
        return calculadora( N - 1 , X );
    }
    
    else if ( O == 'S' ) {
        X -= aux;
        return calculadora( N - 1 , X );
    }
    
    else if ( O == 'M' ) {
        X = X * aux; 
        return calculadora( N - 1 , X );
    }
    
    else if ( O == 'D' ) {
        X = X / aux;
        return calculadora( N - 1 , X );
    }
    
    else if ( O == 'C' ) {
        X = aux;
        return calculadora( N - 1 , X );
    }
    
    return calculadora( N , X );
}

int main() {
    int N;
    float X;
    
    scanf("%d %f", &N , &X);
    
    calculadora( N , X );
    
    return 0;
}