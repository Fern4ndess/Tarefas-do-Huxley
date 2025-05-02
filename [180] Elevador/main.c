#include <stdio.h>

void estourou(int N, int C, int i, int pessoas_no_elevador) {
    if (i == N) {  
        printf("N\n");
        return;
    }

    int S, E;
    scanf("%d %d", &S, &E);

    pessoas_no_elevador -= S;
    if (pessoas_no_elevador < 0) {
        pessoas_no_elevador = 0;
    }
    
    pessoas_no_elevador += E;

    if (pessoas_no_elevador > C) {
        printf("S\n");
        return;
    }

    estourou(N, C, i + 1, pessoas_no_elevador);
}

int main() {
    int N, C;
    scanf("%d %d", &N, &C);
    
    estourou(N, C, 0, 0);
    return 0;
}
