#include <stdio.h>
#include <math.h>

int main() {
    float VMAX, VV, PORCENTAGEM;
    scanf("%f\n %f", &VMAX, &VV);
    
    PORCENTAGEM = (VV * 100)/VMAX;
    
    if (PORCENTAGEM <= 100) {
        printf("0.00\n");
        printf("0");
    }
    else if ( PORCENTAGEM > 100 && PORCENTAGEM <= 120 ) {
        printf("85.13\n");
        printf("4");
    }
    else if ( PORCENTAGEM > 120 && PORCENTAGEM <= 150 ) {
        printf("127.69\n");
        printf("5");
    }
    else if ( PORCENTAGEM > 150 ) {
        printf("574.62\n");
        printf("7");
    }

    return 0;
}
