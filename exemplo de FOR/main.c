#include <stdio.h>

int main() {
    int N;
    int SOMA = 0;
    scanf("%d", &N);
    
    for( int i = 1 ; i <= N ; i++ ) {
        SOMA += i;
    }

    printf("%d\n", SOMA);

    return 0;
}