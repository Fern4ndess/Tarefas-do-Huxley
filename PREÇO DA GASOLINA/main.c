#include <stdio.h>
#include <math.h>

int main() {
    float L;
    float PREÇO;
    char COMB;
    
    scanf("%f\n", &L);
    scanf("%c", &COMB);
    
    if( L <= 20 && COMB == 'A' ) {
        PREÇO = L * 1.90 * 0.97;
        printf("R$ %.2f", PREÇO);
    }
    else if( L > 20 && COMB == 'A' ) {
        PREÇO = L * 1.90 * 0.95;
        printf("R$ %.2f", PREÇO);
    }
    else if( L <= 20 && COMB == 'G' ) {
        PREÇO = L * 2.50 * 0.96;
        printf("R$ %.2f", PREÇO);
    }
    else if( L > 20 && COMB == 'G' ) {
        PREÇO = L * 2.50 * 0.94;
        printf("R$ %.2f", PREÇO);
    }
    else if( L <= 25 && COMB == 'D' ) {
        PREÇO = L * 1.66; 
        printf("R$ %.2f", PREÇO);
    }
    else if( L > 25 && COMB == 'D' ) {
        PREÇO = L * 1.66 * 0.96;
        printf("R$ %.2f", PREÇO);
    }

    return 0;
}