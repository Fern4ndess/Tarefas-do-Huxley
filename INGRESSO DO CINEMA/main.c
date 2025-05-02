#include <stdio.h>

int main() {
    int ESTUDANTE, IDOSO;
    scanf("%d\n %d", &ESTUDANTE, &IDOSO);
    
    if( ESTUDANTE == 1 && IDOSO == 1 ) {
        printf("1");
    }
    else if( ESTUDANTE == 1 && IDOSO == 0 ) {
        printf("1");
    }
    else if( ESTUDANTE == 0 && IDOSO == 1 ) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}
