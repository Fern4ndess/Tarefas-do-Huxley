#include <stdio.h>
#include <math.h>

int main() {
    int X, Y, R;
    double CIRCLE;
    
    scanf("%d %d %d", &X, &Y, &R);
    
    CIRCLE = pow( (double)X , 2 ) + pow( (double)Y , 2 );
    
    if ( sqrt(CIRCLE) == R ) {
        printf("Sobre\n");
    }
    else if ( sqrt(CIRCLE) < R ) {
        printf("Dentro\n");
    }
    else {
        printf("Fora\n");
    }

    return 0;
}