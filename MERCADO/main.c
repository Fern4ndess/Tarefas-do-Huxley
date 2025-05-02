#include <stdio.h>
#include <math.h>

int main() {
    int COD, QUANT;
    double PRE;
    double DESC;
    double VALOR; 
    
    scanf("%d\n %d", &COD, &QUANT);
    
    if(COD == 1) {
        if(QUANT >= 15 || QUANT < 15 && QUANT * 5.30 >= 40) {
            PRE = 5.30;
            DESC = PRE * QUANT * 0.15;
            VALOR = (PRE * QUANT) - DESC;
            printf("R$ %.2lf\n", VALOR);
        }
        else {
            PRE = 5.30;
            VALOR = PRE * QUANT;
            printf("R$ %.2lf\n", VALOR);
        }
    }
    if(COD == 2) {
        if(QUANT >= 15 || QUANT < 15 && QUANT * 6.00 >= 40) {
            PRE = 6.00;
            DESC = PRE * QUANT * 0.15;
            VALOR = (PRE * QUANT) - DESC;
            printf("R$ %.2lf\n", VALOR);
        }
        else {
            PRE = 6.00;
            VALOR = PRE * QUANT;
            printf("R$ %.2lf\n", VALOR);
        }
    }
    if(COD == 3) {
        if(QUANT >= 15 || QUANT < 15 && QUANT * 3.20 >= 40) {
            PRE = 3.20;
            DESC = PRE * QUANT * 0.15;
            VALOR = (PRE * QUANT) - DESC;
            printf("R$ %.2lf\n", VALOR);
        }
        else {
            PRE = 3.20;
            VALOR = PRE * QUANT;
            printf("R$ %.2lf\n", VALOR);
        }
    }
    if(COD == 4) {
        if(QUANT >= 15 || QUANT < 15 && QUANT * 2.50 >= 40) {
            PRE = 2.50;
            DESC = PRE * QUANT * 0.15;
            VALOR = (PRE * QUANT) - DESC;
            printf("R$ %.2lf\n", VALOR);
        }
        else {
            PRE = 2.50;
            VALOR = PRE * QUANT;
            printf("R$ %.2lf\n", VALOR);
        }
    }
    
    return 0;
}