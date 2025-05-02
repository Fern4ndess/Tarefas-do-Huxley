#include <stdio.h>

void multi( int A , int B , int i , int n , int contador[] ) {
    
    if( A > B ) {
        
        if( n >= A ) {
            
            if( n >= 50 ) {
                printf("%d\n", i );
                return;
            }
            
            if( n % A == 0 && n % B == 0 ) {
                contador[i] = n;
                i += 1;
            }
            
        }
        
    }
    
    if( A < B ) {
        
        if( n >= B ) {
            
            if( n >= 50 ) {
                printf("%d\n", i );
                return;
            }
            
            if( n % A == 0 && n % B == 0 ) {
                contador[i] = n;
                i += 1;
            }
            
        }
        
    }
    
    multi( A , B , i , n + 1 , contador );
}

int main() {
    int A, B;
    scanf("%d", &A );
    scanf("%d", &B );
    
    int contador[50];
    multi( A , B , 0 , 0 , contador );
    return 0;
}
