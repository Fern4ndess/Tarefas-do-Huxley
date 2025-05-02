#include <stdio.h>
#include <math.h>

int main(){
    double A, T;
    scanf("%lf", &A);
    
    T = ( A - 32 ) * 5 / 9;
    
    printf("%.2f", T);
    return 0;
}