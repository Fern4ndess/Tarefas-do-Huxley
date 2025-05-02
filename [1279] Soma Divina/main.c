#include <stdio.h>

int main() {
    int N, M1[100][100] , M2[100][100] , MR[100][100];
    char nulo[5] = "Vazia";
    
    scanf("%d", &N);
    if( N == 0 ) {
        printf("%s", nulo );
        return 0;
    }
    
    for (int i = 0 ; i < N ; i++) {
        
        for (int j = 0 ; j < N ; j++) {
            scanf("%d", &M1[i][j]);
        }
        
    }
    for (int i = 0 ; i < N ; i++) {
        
        for (int j = 0 ; j < N ; j++) {
            scanf("%d", &M2[i][j]);
        }
        
    }
    
    
    if( N == 1 ) {
        printf("%d\n", M1[0][0] + M2[0][0]);
    }
    else{
        for (int i = 0 ; i < N ; i++) {
        
            for (int j = 0 ; j < N ; j++) {
                MR[i][j] = M1[i][j] + M2[i][j];
                printf("%d\n", MR[i][j]);
            }
            
        }
    }

    return 0;
}