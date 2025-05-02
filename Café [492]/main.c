#include <stdio.h>

int calculo (int n , int total_capsulas) {
    int caixas;
    char tipo_de_caixa;
    
    if (n == 0) {
        return total_capsulas;
    }
    
    scanf("%d %c", &caixas , &tipo_de_caixa);
    
    if(tipo_de_caixa == 'p' || tipo_de_caixa == 'P') {
        total_capsulas += caixas * 10;
    }
    else if(tipo_de_caixa == 'g' || tipo_de_caixa == 'G') {
        total_capsulas += caixas * 16;
    }
    
    return calculo (n - 1, total_capsulas);
}

int main() {
    int total_capsulas = calculo( 7 , 0 );
    int xicaras = total_capsulas * 2;
    int xicaras_prof = xicaras / 7;
    
    printf("%d\n", total_capsulas);
    printf("%d\n", xicaras_prof);

    return 0;
}
