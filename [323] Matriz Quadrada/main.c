#include <stdio.h>

int main() {
    
    for( int i = 1 ; i != 0 ; i ) {
        scanf("%d", &i);
        int number = 1;
        
        for( int a = 0 ; a < i ; a++ ) {
            for( int b = 0 ; b < i ; b++ ) {
                printf("%d ", number);
            }
        }
    }

    return 0;
}
