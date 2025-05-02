#include <stdio.h>

int Multi(int A , int B , int N ) {
    
    if ( N >= 50) {
        return 0;
    }

    int cont = 0;
    
    if ( N % A == 0 && N % B == 0) {
        cont++;
    }
    
    return cont + Multi( A , B , N + 1);
}

int main() {
    int A , B ;

    scanf("%d %d", &A, &B );

    int resultado = Multi( A , B , 1);
    printf("%d\n", resultado);

    return 0;
}