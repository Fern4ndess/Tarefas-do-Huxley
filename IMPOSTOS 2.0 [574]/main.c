#include <stdio.h>
#include <math.h>

int Imposto_Total() {
    double c_dolar;  
    double Vi, Vf, Ali;  // Valor inicial, Valor do frete, Aliquota
    scanf("%lf", &c_dolar);
    scanf("%lf %lf %lf", &Ali, &Vi, &Vf);
    
    double valor_total1, valor_total2; 
    valor_total1 = ((double)Vi * c_dolar) + ((double)Vf * c_dolar); // Com frete
    valor_total2 = ((double)Vi * c_dolar);  // Sem frete

    double Imposto_de_importacao1 = valor_total1 * 0.6;  // Com frete
    double Imposto_de_importacao2 = valor_total2 * 0.6; // Sem frete
    double Valor_final;
    double ICMS; 
    double Total_de_impostos;
    double Total_a_pagar;

    if (Vi >= 2500) { // Sem frete
        Valor_final = (valor_total2 + Imposto_de_importacao2) / (1 - (Ali / 100.0)); 
        ICMS = Valor_final * (Ali / 100.0); 
        Total_de_impostos = ICMS + Imposto_de_importacao2; 
        Total_a_pagar = valor_total1 + Total_de_impostos; 
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n", c_dolar, ((double)Vi * c_dolar), ((double)Vf * c_dolar), valor_total1, Imposto_de_importacao2, ICMS, Total_de_impostos, Total_a_pagar);
        printf ("Impostos calculados sem o frete");
    } else { // Com frete
        Valor_final = (valor_total1 + Imposto_de_importacao1) / (1 - (Ali / 100.0)); 
        ICMS = Valor_final * (Ali / 100.0); 
        Total_de_impostos = ICMS + Imposto_de_importacao1; 
        Total_a_pagar = valor_total1 + Total_de_impostos; 
        printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n", c_dolar, ((double)Vi * c_dolar), ((double)Vf * c_dolar), valor_total1, Imposto_de_importacao1, ICMS, Total_de_impostos, Total_a_pagar);
        printf ("Impostos calculados com o frete");
    }
}

int main() {
    Imposto_Total(); 
    return 0;
}