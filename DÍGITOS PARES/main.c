#include <stdio.h>

int pares(int n) {
    if (n  == 0) {
        return 0;
    }
    
    int ultdig = n % 10;
    
    if(ultdig % 2 == 0) {
        return 1 + pares(n / 10);
    }
    else {
        return pares(n / 10);
    }
}

void contagem() {
    int n;
    scanf("%d", &n);
    printf("%d", pares(n));
}

int main() {
    contagem();
    return 0;
}