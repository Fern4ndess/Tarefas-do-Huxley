#include <stdio.h>
#include <math.h>

// A = B * Q + M /// A = numero a ser dividido, B = dividendo, Q = quociente da divis�o inteira de a por d, M = mod ou resto da divis�o inteira

int euclides(int A, int B) {
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
        return euclides(B , A % B );
    }
}

// A = primeiro n�mero , B = segundo n�mero , R = resultado
void algoritmo(int N) {
    int A, B;
    if (N == 0) {
        return;
    }
    else {
        scanf("%d %d", &A, &B);
        printf("MDC(%d,%d) = %d\n", A, B, euclides(A , B));
        algoritmo(N -1);
    }
    
}

int main() {
    int N;
    scanf("%d", &N);
    algoritmo(N);
    return 0;
}