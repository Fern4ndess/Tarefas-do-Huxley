#include <stdio.h>

int multi( int N , int A , int B ) {
    
    if ( A > B ) {
        return 0;
    }
    
    if ( A % N == 0 ) {
        printf("%d\n", A);
        return multi( N , A + 1 , B );
    }
    
    return multi( N , A + 1 , B );
}

int main () {
    int N , A , B ;
    
    scanf("%d", &N);
    scanf("%d", &A);
    scanf("%d", &B);
    
    if ( multi( N , A , B ) == 0 ) {
        printf("INEXISTENTE\n");
    }
    
    return 0;
}