#include <stdio.h>
#include <math.h>

int main() {
    int NUMBER, HORAS;
    double GANHOS, SALARY;
    
    scanf("%d", &NUMBER);
    scanf("%d", &HORAS);
    scanf("%lf", &GANHOS);
    
    SALARY = HORAS * GANHOS;
    
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = R$ %.2f\n", SALARY);
    return 0;
}