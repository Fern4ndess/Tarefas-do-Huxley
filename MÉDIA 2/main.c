#include <stdio.h>
int main(){
    double A, B, C, NOTA;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    NOTA = (A * 2 + B * 3 + C * 5) / 10;
    
    printf("MEDIA = %.1lf", NOTA);

    return 0;
}