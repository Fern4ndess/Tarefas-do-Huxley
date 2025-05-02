#include <stdio.h> // VERSÃO INCOMPLETA E DEMORADA
#include <math.h>
#include <string.h>

struct ESTANTE {
    int N;
    int X;
};

int main() {
    struct ESTANTE prateleiras;
    
    scanf("%d", &prateleiras.N );
    
    char produtos[ prateleiras.N ][ prateleiras.N ];
    char BouC[ prateleiras.N ][ prateleiras.N ]; // B ou C
    double D[ prateleiras.N ][ prateleiras.N ];
    double prejuizo = 0.0;
    
    for( int i = 0 ; i < prateleiras.N ; i++ ) {
        
        for( int j = 0 ; j < prateleiras.N ; j++ ) { // na mesma linha
            
            scanf("%c %c %lf", &produtos[i][j] , &BouC[i][j] , &D[i][j] );
            getchar();
            
        }
        
    }
    
    scanf("%d", &prateleiras.X );
    int substance[ prateleiras.X ][2]; // [ par ][ linha = 0 ; coluna = 1 ]
    
    for( int i = 0 ; i < prateleiras.X ; i++ ) {
        scanf("%d %d", &substance[ i ][ 0 ], &substance[ i ][ 1 ] );
        
        prejuizo += D[ substance[i][0] ][ substance[i][1] ];
        printf("%c\n", produtos[ substance[i][0] ][ substance[i][1] ]);
        
        if( BouC[ substance[i][0] ][ substance[i][1] ] == 'B' ) {
            if( substance[i][0] - 1 >= 0 ) { // acima
                printf("%c\n", produtos[ substance[i][0] - 1 ][ substance[i][1] ]);
                prejuizo += D[ substance[i][0] - 1 ][ substance[i][1] ];
            }
            
            if( substance[i][0] + 1 < prateleiras.N ) { // abaixo
                printf("%c\n", produtos[ substance[i][0] + 1 ][ substance[i][1] ]);
                prejuizo += D[ substance[i][0] + 1 ][ substance[i][1] ];
            }
            
            if( substance[i][1] - 1 >= 0 ) { // esquerda
                printf("%c\n", produtos[ substance[i][0] ][ substance[i][1] - 1 ]);
                prejuizo += D[ substance[i][0] ][ substance[i][1] - 1 ];
            }
            
            if( substance[i][1] + 1 < prateleiras.N ) { // direita
                printf("%c\n", produtos[ substance[i][0] ][ substance[i][1] + 1 ]);
                prejuizo += D[ substance[i][0] ][ substance[i][1] + 1 ];
            }
        }
        
    }
    
    printf("%.2lf\n", prejuizo);

    return 0;
}
