#include <stdio.h>
#include <math.h>

void series( int total , int turno , double x , double expoente , double multiplo , double number ) {
    if( turno > total ) {
        printf("S: %.2lf\n", number );
        return;
    }
    
    if( turno %2 != 0 ) {
        number += x / pow( 2 , expoente );
        series( total , turno + 1 , x + 2 , expoente + 1 , multiplo , number );
    }
    if( turno %2 == 0 ) {
        number += pow( 2 , expoente ) / ( 3 * multiplo );
        series( total , turno + 1 , x , expoente + 1 , multiplo + 1 , number );
    }
    
}

int main() {
    int total;
    
    scanf("%d", &total);
    
    if( total == 0 ) return 0;
    
    series( total , ( total + 1 ) - total , 1 , 0 , 1 , 0 );
    return 0;
}