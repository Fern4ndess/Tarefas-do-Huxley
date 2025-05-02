#include <stdio.h>

int main() {
    int aliq ;
    double usd , ICMS , valor_produto[2] , valor_frete[2] , valor_final_produto;
    double total_produto[2] , imposto_import = 0.60 , ICMS_import , total_total;
    
    scanf("%lf", &usd );
    scanf("%d", &aliq );
    
    aliq = aliq / 100 ;
    
    scanf("%lf", &valor_produto[0]);
    scanf("%lf", &valor_frete[0]);
    // 0 = original , 1 = dólar
    valor_produto[1] = valor_produto[0] * usd;
    valor_frete[1] = valor_frete[0] * usd;
    
    total_produto[0] = valor_produto[0] + valor_frete[0];
    
    imposto_import *= valor_produto[0]; 
    
    valor_final_produto = (valor_produto[0] + valor_frete[0] + imposto_import) / (1 - aliq);
    
    ICMS = valor_final_produto * aliq;
    ICMS_import = ICMS + imposto_import;
    
    total_total = ICMS_import * 2;
    
    printf("%.2lf\n", usd);
    printf("%.2lf\n", valor_produto[0]);
    printf("%.2lf\n", valor_frete[0]);
    printf("%.2lf\n", total_produto[0]);
    printf("%.2lf\n", imposto_import);
    printf("%.2lf\n", ICMS);
    printf("%.2lf\n", ICMS_import);
    printf("%.2lf\n", total_total);
    
    if ( total_total * usd > 2.500 ) {
        printf("Impostos calculados com o frete\n");
    }
    else {
        printf("Impostos calculados sem o frete\n");
    }
    
    return 0;
}
