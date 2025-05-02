#include <stdio.h>

void menor( int array[6] , int n , int smaller ) {
    if( n == 6 ) { 
        printf("%d\n" , smaller );
        return;
    }
    
    if( array[n] <= smaller) {
        smaller = array[n];
    }
    
    menor( array , n + 1 , smaller);
}

void maior( int array[6] , int n , int bigger ) {
    if( n == 6 ) { 
        printf("%d\n" , bigger );
        return;
    }
    
    if( array[n] >= bigger ) {
        bigger = array[n];
    }
    
    maior( array , n + 1 , bigger );
}

void scan( int array[6] , int n ) {
    
    if( n == 6 ) return;
    
    scanf("%d", &array[n]);
    
    scan( array , n + 1 );
}

int main() {
    int array[6];
    
    scan( array , 0 );
    menor( array , 0 , 999999999 );
    maior( array , 0 , 0 );
    return 0;
}
