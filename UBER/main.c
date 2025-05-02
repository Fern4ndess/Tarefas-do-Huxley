#include <stdio.h>
#include <math.h>

int main() {
    double PEDRO, VFT, porKM, TKM;
    double TARIFA;
    double TRINTA;
    double SALDO;
    int FDS;
    
    scanf("%lf %lf %lf %lf %d", &PEDRO, &VFT, &porKM, &TKM, &FDS); // VFT = Valor Fixo da Tarifa
    
    TARIFA = VFT + porKM * TKM;
    TRINTA = PEDRO * 0.30;
    
    if (FDS == 1) {
        TARIFA *= 1.10;
        if (TRINTA >= TARIFA) {
            SALDO = TRINTA - TARIFA;
            printf("Vai poder viajar.\n");
            printf("%.2lf\n", TARIFA);
            printf("%.2lf\n", SALDO);
        }
        else {
            SALDO = TARIFA - TRINTA;
            printf("Nao vai poder viajar.\n");
            printf("%.2lf\n", SALDO);
        }
    }
    else {
        if (TRINTA >= TARIFA) {
            SALDO = TRINTA - TARIFA;
            printf("Vai poder viajar.\n");
            printf("%.2lf\n", TARIFA);
            printf("%.2lf\n", SALDO);
        }
        else {
            SALDO = TARIFA - TRINTA;
            printf("Nao vai poder viajar.\n");
            printf("%.2lf\n", SALDO);
        }
    }

    return 0;
}