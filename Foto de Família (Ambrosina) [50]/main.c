#include <stdio.h>

void inserir(float alturas[], int n, float temp) {
    if (n <= 0 || alturas[n - 1] <= temp) {
        alturas[n] = temp; 
        return;
    }
    alturas[n] = alturas[n - 1]; 
    inserir(alturas, n - 1, temp); 
}

void ordenar(float alturas[], int n) {
    if (n <= 1) return;

    ordenar(alturas, n - 1);
    float temp = alturas[n - 1];
    inserir(alturas, n - 1, temp);
}

void organizar_alturas(float alturas[], float resultado[]) {
    resultado[0] = alturas[0]; 
    resultado[1] = alturas[2]; 
    resultado[2] = alturas[3]; 
    resultado[3] = alturas[1]; 
}

void ler_alturas(float alturas[], int index) {
    if (index == 4) return; 
    scanf("%f", &alturas[index]);
    ler_alturas(alturas, index + 1); 
}

void imprimir_resultado(float resultado[], int index) {
    if (index == 4) return; 
    printf("%.2f\n", resultado[index]);
    imprimir_resultado(resultado, index + 1); 
}

int main() {
    float alturas[4];
    float resultado[4];

    
    ler_alturas(alturas, 0);
    ordenar(alturas, 4);
    organizar_alturas(alturas, resultado);
    imprimir_resultado(resultado, 0);

    return 0;
}
