#include <stdio.h>
int main() {
    int A;
    
    scanf("%d", &A);
    
    if( A < 16 ) {
        printf("nao eleitor");
    }
    else if( A >= 18 && A < 65 ) {
        printf("eleitor obrigatorio");
    }
    else if( A > 16 && A < 18 ) {
        printf("eleitor facultativo");
    }
    else {
        printf("eleitor facultativo");
    }
    
    return 0;
}