#include <stdio.h>
#include <math.h>

int main() {
    int DIA, EST, SOC;
    double INGRESSO;
    scanf ("%d", &DIA);
    scanf ("%d", &EST);
    scanf ("%d", &SOC);
    
    if (EST == 1) {
        if (DIA == 1 || DIA == 2 || DIA == 3 || DIA == 4 ) {
            INGRESSO = 15 * 0.70;
            printf("ESTUDANTE: R$ %.2lf\n", INGRESSO);
        }
        else if ( DIA == 5 || DIA == 6 || DIA == 7 ) {
            INGRESSO = 30 * 0.70;
            printf("ESTUDANTE: R$ %.2lf\n", INGRESSO);
        }
    }
    else if (EST == 0 && SOC == 1) {
        if (DIA == 1 || DIA == 2 || DIA == 3 || DIA == 4 ) {
            INGRESSO = 15;
            printf("SOCIO: R$ %.2lf\n", INGRESSO);
        }
        else if( DIA == 5 || DIA == 6 || DIA == 7 ) {
            INGRESSO = 30 * 0.80;
            printf("SOCIO: R$ %.2lf\n", INGRESSO);
        }
    }
    else {
        INGRESSO = 30;
        printf("COMUM: R$ %.2lf\n", INGRESSO);
    }
 
    return 0;   
}