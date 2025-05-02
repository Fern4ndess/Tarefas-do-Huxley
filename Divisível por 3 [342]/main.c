#include <stdio.h>

int contadivisor (int N, int  i) {
    if(i > N) {
        return 0;
    }
    
    if (N % i == 0 && i % 3 == 0) {
        return 1 + contadivisor(N, i + 1);
    }
    
    return contadivisor(N, i + 1);
}

int main() {
    int N, divisores;
    scanf("%d", &N);
    
    divisores = contadivisor(N, 1);
    
    if (divisores > 0) {
        printf("%d\n", divisores);
    } else {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    
    return 0;
}