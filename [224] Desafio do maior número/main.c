#include <stdio.h>

void maior( int array[] , int n , int x , int contador ) {
    
    if( n == contador ) {
        printf("%d\n", x );
        return;
    }
    
    if( x <= array[n]) {
        x = array[n];
    }
    
    maior( array , n + 1 , x , contador );
}

void scan( int array[] , int n , int contador ) {
    
    if(n >= 100) return;
    
    scanf("%d", &array[n]);
    
    contador += 1;
    
    if( array[n] == 0 ) {
        maior( array , 0 , array[0] , contador );
        return;
    }
    
    scan( array , n + 1 , contador);
}

int main() {
    int array[100];
    
    scan( array , 0 , 0 );

    return 0;
}