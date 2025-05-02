#include <stdio.h>

int triangular( int A , int N ) {
    
    int B = A + 1;
    int C = A + 2;
    
    if ( A * B * C == N ) {
        printf("%d * %d * %d = %d\n", A , B , C , N);
        printf("Verdadeiro\n");
    }
    else if ( A * B * C > N ) {
        printf("Falso\n");
    }
    else {
        return triangular( A + 1 , N);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    triangular( 1 , N);

    return 0;
}
