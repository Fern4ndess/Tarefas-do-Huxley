#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if ( A == B || B == C || C == B || A - B = 0 || B - C == 0 || C - A == 0 || A - B - C == 0
         B - C - A == 0   || C - A - B == 0) {
        printf("S\n");
    } 
    else {
        printf("N\n");
    }

    return 0;
}