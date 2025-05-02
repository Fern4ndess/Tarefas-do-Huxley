#include <stdio.h>

void comparador( double original[5] , double desconto[5] , int x , int contador ) {
    if( x == 5 ) {
        printf("%d\n", contador );
        return;
    }
    
    if( original[x] >= desconto[x] * 0.80 ) {
        contador += 1;
    }
    
    comparador(  original , desconto , x + 1 , contador );
}

void scan( double original[5] , double desconto[5] , int n ) {
    
    if( n == 5 ) {
        comparador( original , desconto , 0 , 0 );
        return;
    }
    
    scanf("%lf", &original[n]);
    scanf("%lf", &desconto[n]);
    
    scan( original , desconto , n + 1 );
}

int main() {
    double original[5] , desconto[5];
    scan( original , desconto , 0 );
    return 0;
}