#include <stdio.h>
#include <math.h>

int main() {
    int matriz[3][3], menor = 100000 , delta = 0 , exceto_diagonal = 0;
    double media_positivo = 0 , positivos = 0;
    
    for( int i = 0 ; i < 3 ; i++ ) {
        
        for( int j = 0 ; j < 3 ; j++ ) {
            
            scanf("%d", &matriz[i][j] );
            
            if( matriz[i][j] <= menor ) {
                menor = matriz[i][j];
            }
            
            if( matriz[i][j] > 0 ) {
                positivos += 1;
                media_positivo += (double)matriz[i][j];
            }
            
        }
        
    }
    
    media_positivo = media_positivo / positivos;
    
    if( menor % 2 == 0 ) {
        delta = 1;
    }
    
    //exceto matriz[0][0] + matriz[1][1] + matriz[2][2]
    exceto_diagonal += matriz[0][1] + matriz[0][2];
    exceto_diagonal += matriz[1][0] + matriz[1][2];
    exceto_diagonal += matriz[2][0] + matriz[2][1];
    
    printf("%lf %d %d %d\n", media_positivo , menor , delta , exceto_diagonal);
    
    return 0;
}
