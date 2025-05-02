#include <stdio.h>
#include <math.h>

// A = B * Q + M /// A = numero a ser dividido, B = dividendo, Q = quociente da divisão inteira de a por d, M = mod ou resto da divisão inteira

int euclides(int A, int B, int Q, int M) {
    if ( A == 0) {
        return B;
    }
    if ( B == 0 ) {
        return A;
    }
    
    if (A == B ) {
        return A;
    }
    else {
        
    }
}

// A = primeiro número , B = segundo número , R = resultado
void algoritmo() {
    int N, A, B, Q, M, R;
    scanf("%d", &N);
    scanf("%d %d", &A, &B);
    R = euclides(B = A * Q + M);
    printf("MDC(%d,%d) = %d\n", A, B, R);
}

int main() {
    algoritmo();
    return 0;
}
