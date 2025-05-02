#include <stdio.h>
#include <math.h>

int batalha(int V1, int V2, int D1, int D2){
    
    if (V1 > 0 && V2 > 0) {
        
        if ((V1 / D2) < (V2 / D1)) {
            D1 += 50;
        } else {
            V2 -= D1;
        }

        V1 -= D2;

        if (V1 > 0 && V2 > 0) {
            return batalha( V1 , V2 , D1 , D2 );
        }
    }

    if (V2 < 0) {
        printf("Clodes\n");
    }
    else {
        printf("Bezaliel\n");
    }
    batalha( V1 , V2 , D1 , D2 );
}

void n_de_turnos(int n){
    
    if (n == 0){
        return;
    }
    
    int V1 , V2 , D1 , D2 ;
    
    scanf("%d %d %d %d", &V1 , &V2 , &D1 , &D2 );
    
    batalha( V1 , V2 , D1 ,D2);
    
    n_de_turnos( n - 1 );
}

int main() {
    int n; 
    
    scanf("%d", &n);
    
    n_de_turnos(n);
return 0;
}