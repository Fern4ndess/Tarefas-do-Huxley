#include <stdio.h>

void compara( int array[] , int  n , int x , int contador ) {
    
    if( n > 9 ) {
        printf("%d\n", contador );
        return;
    }
    
    if( array[n] == x ) {
        contador += 1;
    }
    
    compara( array , n + 1 , x , contador );
}

void scan( int array[] , int n , int x ) {
    if(n > 9) {
        scanf("%d", &x);
        compara( array , 0 , x , 0 );
        return;
    }
    
    scanf("%d", &array[n]);
    
    scan( array , n + 1 ,  x );
}

int main() {
    int n , x ;
    int array[10];

    scan( array , 0 , x );
    
    return 0;
}
