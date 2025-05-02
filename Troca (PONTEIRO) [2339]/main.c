#include <stdio.h>

void troca(int *A , int *B) {
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

int main() {
    int X, Y;
    
    scanf("%d %d", &X , &Y );
    
    printf("a: %d b: %d\n", X, Y);
    troca(&X, &Y);
    printf("a: %d b: %d\n", X, Y);

    return 0;
}
