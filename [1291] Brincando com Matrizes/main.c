#include <stdio.h>
#include <math.h>

int main() {
    int matriz[3][3], maior = -10000 , delta , diagonal;
    double media = 0;
    
    for( int i = 0 ; i < 3 ; i++ ) {
        
        for( int j = 0 ; j < 3 ; j++ ) {
            scanf("%d", &matriz[i][j]);
            
            int atual = matriz[i][j];
            if( atual >= maior ) {
                maior = atual;
            }
            
            media += (double)matriz[i][j]; 
        }
        
    }
    
    media = media / 9;
    
    if( maior < 0 ) delta = -1;
    if( maior == 0 ) delta = 0;
    if( maior > 0 ) delta = 1;
    
    diagonal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    
    printf("%.2lf %d %d %d\n", media , maior , delta , diagonal );

    return 0;
}