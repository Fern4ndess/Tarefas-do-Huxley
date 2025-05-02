#include <stdio.h>

void sequence( int X , int Y , int i ) {
    if( i > Y ) {
        return;
    }
    
    if( X == 1 ) {
        printf("%d\n", i );
        i += 1;
    }
    else {
        
        for( int j = 1 ; j <= X ; j++ ) {
            if( i > Y ) {
                return;
            }
            
            if( j == X ) {
                printf("%d\n", i );
                i += 1;
                break;
            }
            else {
                printf("%d ", i );
                i++;
            }
        }
    
        if( i > Y ) {
            return;
        }
    
    }
    
    sequence( X , Y , i );
}

int main() {
    int X, Y;
    
    scanf("%d %d", &X , &Y );
    if( X <= 1 && X >= 20 ) {
        return 0;
    }
    
    sequence( X , Y , 1 );

    return 0;
}
