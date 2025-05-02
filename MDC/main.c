#include <stdio.h>
#include <math.h>

int euclides(int A, int B) {
    if ( A == 0 ) {
        return B;
    }
    if ( B == 0 ) {
        return A;
    }
    
    if ( A == B ) {
        return A;
    }
    
    else {
        return euclides(B , A % B );
    }
}

void algoritmo() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%d\n", euclides(A , B));
    
}

int main() {
    algoritmo();
    return 0;
}