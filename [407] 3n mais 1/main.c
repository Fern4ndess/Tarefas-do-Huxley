#include <stdio.h>

int ciclo_collatz(int n) {
    if (n == 1) {
        return 1;
    } else if (n % 2 == 0) {
        return 1 + ciclo_collatz(n / 2);
    } else {
        return 1 + ciclo_collatz(3 * n + 1);
    }
}

int max_ciclo(int i, int j, int max_atual) {
    if (i > j) {
        return max_atual;
    }
    
    int ciclo_atual = ciclo_collatz(i);
    if (ciclo_atual > max_atual) {
        max_atual = ciclo_atual;
    }
    
    return max_ciclo(i + 1, j, max_atual);
}

void resolver(int i, int j) {
    int maior_ciclo = max_ciclo(i < j ? i : j, i > j ? i : j, 0);
    printf("%d %d %d\n", i, j, maior_ciclo);
}

void processar_entrada() {
    int i, j;
    if (scanf("%d %d", &i, &j) != 2) {
        return;
    }
    resolver(i, j);
    processar_entrada();
}

int main() {
    processar_entrada();
    return 0;
}