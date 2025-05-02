#include <stdio.h>
#include <math.h>

int main() {
    int I;
    double T;
    int S;
    
    scanf("%d %lf %d", &I, &T, &S);

    if ( I > 60 || T > 39 || S == 3 ) {
        printf("Alto\n");
    }
    else if (S == 0) {
        printf("Baixo\n");
    }
    else if ( I < 12 && T < 37.5 && S != 3 ) {
        printf("Baixo\n");
    }
    else if ( (12 <= I && I <= 60 && T >= 37.5 && T < 39) || S == 2 ) {
            printf("Medio\n");
    }
    else {
        printf("Medio\n");
    }
    
    return 0;
}