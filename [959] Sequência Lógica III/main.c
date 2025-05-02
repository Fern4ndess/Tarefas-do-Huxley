#include <stdio.h>

void sequence( int X , int Y , int Z , int i ) {
    if( i > Y ) {
        return;
    }
    
    if( X == 1 ) {
        printf("%d\n", i );
        i += Z;
    }
    else {
        
        for( int j = 1 ; j <= X ; j++ ) {
            if( i > Y ) {
                return;
            }
            
            if( j == X ) {
                printf("%d\n", i );
                i += Z;
                break;
            }
            else {
                printf("%d ", i );
                i += Z;
            }
        }
    
        if( i > Y ) {
            return;
        }
    
    }
    
    sequence( X , Y , Z , i );
}

int main() {
    int X , Y , Z ;
    
    scanf("%d %d %d", &X , &Y , &Z );
    if( X <= 1 && X >= 20 ) {
        return 0;
    }
    if( Z < 1 ) return 0;
    
    sequence( X , Y , Z , 1 );

    return 0;
}