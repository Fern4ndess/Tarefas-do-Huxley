#include <stdio.h>

int main() {
    int X, Y;
    
    scanf("%d\n", &X);
    scanf("%d", &Y);
    
    if( X > Y ) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    if( X == Y ) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    if( X < Y ) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    if( X != Y ) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    if( X >= Y ) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    if( X <= Y ) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}