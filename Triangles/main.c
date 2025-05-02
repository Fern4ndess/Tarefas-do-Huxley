#include <stdio.h>
#include <math.h>

int main() {
    float A;
    float B;
    float C;
    scanf("%f\n %f\n %f", &A, &B, &C);
    
    if( A == B && B == C && C == A) {
        printf("equilatero");
    }
    else if( A == B && B != C && C != A ) {
        printf("isosceles");
    }
    else if( A == C && C != B && B != A ) {
        printf("isosceles");
    }
    else if( B == C && C != A && A != C ) {
        printf("isosceles");
    }
    else {
        printf("escaleno");
    }

    return 0;
}