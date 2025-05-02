#include <stdio.h>

// Função recursiva para somar as cápsulas doadas pelos professores
int calcularCapsulas(int n, int totalCapsulas) {
    // Caso base: quando n == 0 (nenhum professor a ser processado)
    if (n == 0) {
        return totalCapsulas;
    }

    int caixas;
    char tipoCaixa;
    
    // Leitura do número de caixas e do tipo de caixa
    scanf("%d %c", &caixas, &tipoCaixa);

    // Verifica o tipo de caixa e adiciona a quantidade de cápsulas correspondentes
    if (tipoCaixa == 'p' || tipoCaixa == 'P') {
        totalCapsulas += caixas * 10;  // Caixa pequena
    } else if (tipoCaixa == 'g' || tipoCaixa == 'G') {
        totalCapsulas += caixas * 16;  // Caixa grande
    }

    // Chama recursivamente para o próximo professor
    return calcularCapsulas(n - 1, totalCapsulas);
}

int main() {
    int totalCapsulas = calcularCapsulas(7, 0);  // Chama a função para processar 7 professores
    int totalXicaras = totalCapsulas * 2;  // Cada cápsula prepara 2 xícaras

    // Saída
    printf("%d\n", totalCapsulas);  // Total de cápsulas
    printf("%d\n", totalXicaras);   // Total de xícaras

    return 0;
}
