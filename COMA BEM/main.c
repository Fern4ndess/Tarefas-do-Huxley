#include <stdio.h>
int main() {
    double VALOR, TOTAL;
    
    scanf("%lf", &VALOR);
    
    TOTAL = VALOR * 1.10;
    
    printf("%.2lf", TOTAL);
    
    return 0;
}