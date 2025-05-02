#include <stdio.h>

void narray ( int array[] , int aux) {
    
    if( aux < 0 ) return;
    
    int i;
    scanf("%d", &i);
    
    array[aux] = i;
    
    narray( array , aux - 1 );
}

void inversor( int array[] , int n , int aux2 ) {
    if( aux2 > n ) return;
    printf("%d ", array[aux2] );
    inversor( array , n , aux2 + 1 );
}

int main() {
    int n , aux , aux2 ;
    
    scanf("%d", &n);
    
    int array[n];
    
    aux = n;
    aux2 = n;
    
    if( n <= 0 ) return 0;
    
    if( n == 1 ) {
        narray( array , aux );
    }
    
    if( n > 1 ) {
        narray( array , aux - 1 );
    }
    
    inversor( array , n - 1 , aux2 - aux2 );
    return 0;
}