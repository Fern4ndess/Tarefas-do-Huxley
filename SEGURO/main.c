#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    
    if( A == 1 && B == 1 ) {
        printf("0");
    }
    
    else if( A == 1 && B == 0) {
        printf("0");
    }
    
    else if( A == 0 && B == 0) {
        printf("0");
    }
    
    else if( A == 0 && B == 1 ) {
        printf("1");
    }

    return 0;
}