#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C;
    float X1, X2;
    float DELTA, RQ;
    
    scanf("%f", &A);
    scanf("%f", &B); // (ax²+bx+c=0)
    scanf("%f", &C);
    
    DELTA = pow(B , 2) - (4 * A * C);
    RQ = sqrt(DELTA);
    X1 = (-B + RQ)/(2 * A);
    X2 = (-B - RQ)/(2 * A);
    
    if ( A == 0 ) {
        printf("NEESG\n");
    }
    else if (DELTA < 0) {
        printf("NRR\n");
    }
    else {
        printf("%.2f\n", X1);
        printf("%.2f\n", X2);
    }
    
    return 0;
}