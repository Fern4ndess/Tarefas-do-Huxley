#include <stdio.h>
#include <math.h>

int main() {
    int L, A, CONC;
    scanf("%d\n %d", &L, &A);
    
    CONC = A / L;
    
    if( CONC <= 8 ) {
        printf("A\n");
    }
    else if( 9 <= CONC && CONC <= 12 ) {
        printf("B\n");
    }
    else if( 13 <= CONC && CONC <= 18 ) {
        printf("C\n");
    }
    else if( CONC > 18 ) {
        printf("D\n");
    }

    return 0;
}